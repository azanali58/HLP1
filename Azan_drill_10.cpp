#include "std_lib_facilities.h"
//define the point
struct Point {
    double x;
    double y;
    Point()
	{
		x = y = 0;
	}
	Point(double num1, double num2)
	{
		x = num1;
		y = num2;
	}
	void display(Point P)
	{
		cout <<"(" <<P.x << "," << P.y<<")"<<endl;
	}
};
bool compare_vectors(vector<Point> vp1,vector<Point> vp2)
{
    for (int i = 0;i < 7;i++)
	{ 
		if (vp1[i].x!= vp2[i].x || vp1[i].y != vp2[i].y)
			return false;
            break;
    }
    return true;
		
}
int main()
{
    //prompt user for points and store them in vector
    cout << "Please enter seven sets of (x, y) points:\n";
    vector<Point> original_points;
    double x, y;
   for (int i = 0;i < 7;i++)
	{
        cin >>x;
        cin >>y;
        cout<<"("<<x<<","<<y<<")"<<endl;
        Point p(x,y);
        original_points.push_back(p);
    } 
    cout<< "Displaying the original points" << endl;
    for (Point p : original_points)
         p.display(p);
    cout << "\n";
    vector<Point>  processed_points;
    // write points to file
    ofstream f;
	f.open("mydata.txt");
    if (!f) {
        cout << "error can't able to open file, mydata.txt"<<endl;
    }
    else{
        for (Point i : original_points)
	    {

		    f << "("<<i.x << "," << i.y <<")"<< endl;
    	}
    }
	f.close();
    
    
    // read points from file
    ifstream f1;
    f1.open("mydata.txt");
    if (!f1){
        cout<<"can't open input file, mydata.txt "<<endl;
    }else
    {
        double x1, y1;
        string line,s1,s2;
        while (getline(f1, line)){
            int comma_index= line.find(',');
            int end_index= line.find(')');
            int start_index = line.find('(');
            s1 =line.substr(start_index+1, comma_index-1);
            s2 =line.substr(comma_index+1, end_index-1);
            x1 = stod(s1);
            y1 = stod(s2);
            Point pp(x1,y1);
            processed_points.push_back(pp);
        }
    
    }
    // print data from both vectors
    cout << "\nData from ifstream:\n";
    cout << "original points : " << endl;
	for (Point op : original_points)
	{
		op.display(op);
	}
	cout <<"processed points : " << endl;
	for (Point pps : processed_points)
	{
		pps.display(pps);
    }

    // compare vectors
    if (compare_vectors(original_points, processed_points) == true)
		cout << "Congrats, Everything correct";
	else
		cout << "Something's wrong";

	return 0;
}
