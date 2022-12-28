#include <iostream>

using namespace std;

int main()
{
    int distance[4][4];

    for(int i =0 ; i<4 ;i++)
    {

        for(int j = 0 ; j< 4 ; j++)
        {

            cout<<"way no. "<<i<<" road : "<<j<<endl;
            cout<<"enter the distances for road number "<<i+1<<endl;;
            cin>>distance[i][j];
        }
    }

    for(int i =0 ; i<4 ;i++)
    {

        for(int j = 0 ; j< 4 ; j++)
        {

            cout<<distance[i][j]<<" , ";
        }
        cout<<endl;
    }

    int roadsdistance[4];

        for(int i =0 ; i<4 ;i++)
        {

            int totalDistance = 0;
            for(int j = 0 ; j < 4; j++)
            {

                totalDistance+= distance[i][j];

            }
            cout<<"total distance of way no "<<i+1<<" = "<<totalDistance<<endl;
            roadsdistance[i] = totalDistance;
        }

        for(int i = 0; i < 4 ; i++)
        {

            cout<<"the way : "<<i +1<<" will spend : "<<roadsdistance[i]<<"km \n";
        }


        int min_Distance = roadsdistance[0];
        int way_num =0;
        for(int i = 0 ; i <4; i++)
        {

            if(roadsdistance[i]< min_Distance)
            {
                min_Distance = roadsdistance[i];
                way_num = i+1;
            }


        }


        cout<<"the shortest distance is "<<min_Distance<<endl;
        cout<<"the shortest way is "<<way_num<<endl;










    return 0;
}
