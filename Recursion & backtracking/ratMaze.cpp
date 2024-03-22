#include<iostream>
#include <vector>
using namespace std;
bool isSafe(int newx,int newy,int maze[][4],int row, int col,vector<vector<bool>>&visited){
    if((newx>=0 && newx<row)&&
       (newy>=0 && newy<col)&&
        (maze[newx][newy]==1 )&& 
        visited[newx][newy]==false){
             return true;
        }
        return false;


}
void pathOccurence(int maze[][4],int row,int col,int srcx,int srcy,string output,vector<vector<bool>>&visited){
    if(srcx==row-1 && srcy==col-1){
        cout<< output <<endl;
        return;
    }

       /*up*/
   int newx=srcx;
   int newy=srcy+1;
   if(isSafe(newx,newy,maze,row,col,visited)){
            output.push_back('D');
            visited[newx][newy]=true;
             pathOccurence(maze,row,col,newx,newy,output,visited);
             output.pop_back();
             visited[newx][newy]=false;
    }

    /*down*/

   newx=srcx;
   newy=srcy-1;
   if(isSafe(newx,newy,maze,row,col,visited)){
            output.push_back('U');
            visited[newx][newy]=true;
              pathOccurence(maze,row,col,newx,newy,output,visited);
             output.pop_back();
             visited[newx][newy]=false;
    }

    /*right*/
     newx=srcx+1;
     newy=srcy;
   if(isSafe(newx,newy,maze,row,col,visited)){
            output.push_back('R');
            visited[newx][newy]=true;
             pathOccurence(maze,row,col,newx,newy,output,visited);
            output.pop_back();
            visited[newx][newy]=false;
    }
    
    /*left*/
    newx=srcx-1;
    newy=srcy;
   if(isSafe(newx,newy,maze,row,col,visited)){
            output.push_back('L');
            visited[newx][newy]=true;
              pathOccurence(maze,row,col,newx,newy,output,visited);
             output.pop_back();
             visited[newx][newy]=false;
    }

 




    
}
int main (){
   int maze[][4]={
    {1,0,0,0},
    {1,1,0,1},
    {1,0,0,0},
    {1,1,1,1}
};
int row=4;
int col=4;

int srcx=0;
int srcy=0;

string output="";

vector<vector<bool>>visited(row,vector<bool>(col ,false));

if(maze[0][0]==0){
    cout<<"path is not found";
}else{
    visited[srcx][srcy]=true;
   pathOccurence(maze,row,col,srcx,srcy,output,visited); 
}

}