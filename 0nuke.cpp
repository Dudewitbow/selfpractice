#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//void fillArray(int arr[][n]);
//void displayArray(int arr[][n]);

int main()
{
    srand(time(0));
    int m = rand()%8 + 2;
    int n = rand()%8 + 2;
    int arr[m][n];
    cout << "Size of Matrix: " << m << " by " << n << endl;

    printf("filling array...\n");
    //fillArray(arr);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = rand()%10;
        }
    }

    printf("Displaying array...\n\n");
    //displayArray(arr);
    for(int i = 0; i < m; i++){
        printf("\n");
        for(int j = 0; j < n; j++){
            printf("%i ", arr[i][j]);
        }
    }

    printf("\n\nNuking rows and colums that contain 0...\n\n");
    int row[m] = {0};
    int col[n] = {0};

    //marking for nuke
    for(int i = 0; i < m; i++){
        if(row[i] == 1) continue;
        for(int j = 0; j < n; j++){
            //if(col[j] == 1) continue;
            if(arr[i][j] == 0){//mark for nuke
                row[i] = 1;
                col[j] = 1;
                //printf("marking row %i col %i for nuking", i , j);
            }
        }
    }

    //actual nuke
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(row[i] == 1 || col[j] == 1) arr[i][j]= 0;
        }
    }


    printf("Displaying array...\n\n");
    for(int i = 0; i < m; i++){
        printf("\n");
        for(int j = 0; j < n; j++){
            printf("%i ", arr[i][j]);
        }
    }

    return 0;
}

/*void fillArray(int arr[][n]){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = rand()%10;
        }
    }
}*/

/*void displayArray(int arr[][n]){
    for(int i = 0; i < m; i++){
        printf("\n");
        for(int j = 0; j < n; j++){
            printf("%i ", arr[i][j]);
        }
    }
}*/