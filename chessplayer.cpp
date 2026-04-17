#include<iostream>
#include<vector>
#include<utility>
#include<string>
using namespace std;
int ischeckbywhite(int i,int j,vector<vector<string>>&board);
int ischeckbyblack(int i,int j,vector<vector<string>>&board);
int isattackedbywhite(int i,int j,vector<vector<string>>&board);
int isattackedbyblack(int i,int j,vector<vector<string>>&board);
int iswhite(string h);
int isblack(string h);
vector<pair<int,int>> wheredoesblackkingexist(vector<vector<string>>&board);
vector<pair<int,int>> wheredoeswhitekingexist(vector<vector<string>>&board);
vector<pair<int,int>> wheredoesblackbishopexist(vector<vector<string>>&board);
vector<pair<int,int>> wheredoesblackrookexist(vector<vector<string>>&board);
vector<pair<int,int>> wheredoesblackqueenexist(vector<vector<string>>&board);
vector<pair<int,int>> wheredoeswhitepawnexist(vector<vector<string>>&board);
vector<pair<int,int>> wheredoeswhiteknightexist(vector<vector<string>>&board);
vector<pair<int,int>> wheredoeswhiterookexist(vector<vector<string>>&board);
vector<pair<int,int>> wheredoeswhitebishopexist(vector<vector<string>>&board);
vector<pair<int,int>> wheredoeswhitequeenexist(vector<vector<string>>&board);
vector<pair<int,int>> wheredoesblackpawnexist(vector<vector<string>>&board);
vector<pair<int,int>> wheredoesblackknightexist(vector<vector<string>>&board);

int iscapturablebyblackpawn(int i,int j,vector<vector<string>>&board);
int iscapturablebyblackknight(int i,int j,vector<vector<string>>&board);
int iscapturablebyblackrook(int i,int j,vector<vector<string>>&board);
int iscapturablebyblackbishop(int i,int j,vector<vector<string>>&board);
int iscapturablebyblackqueen(int i,int j,vector<vector<string>>&board);
int iscapturablebyblackking(int i,int j,vector<vector<string>>&board);

int iscapturablebywhitepawn(int i,int j,vector<vector<string>>&board);
int iscapturablebywhiteknight(int i,int j,vector<vector<string>>&board);
int iscapturablebywhiterook(int i,int j,vector<vector<string>>&board);
int iscapturablebywhitebishop(int i,int j,vector<vector<string>>&board);
int iscapturablebywhitequeen(int i,int j,vector<vector<string>>&board);
int iscapturablebywhiteking(int i,int j,vector<vector<string>>&board);

int ismovablepawnblack(int i,int j,vector<vector<string>>&board);
int ismovableknightblack(int i,int j,vector<vector<string>>&board);
int ismovablebishopblack(int i,int j,vector<vector<string>>&board);
int ismovablerookblack(int i,int j,vector<vector<string>>&board);
int ismovablequeenblack(int i,int j,vector<vector<string>>&board);
int ismovablekingblack(int i,int j,vector<vector<string>>&board);

int ismovablepawnwhite(int i,int j,vector<vector<string>>&board);
int ismovableknightwhite(int i,int j,vector<vector<string>>&board);
int ismovablebishopwhite(int i,int j,vector<vector<string>>&board);
int ismovablerookwhite(int i,int j,vector<vector<string>>&board);
int ismovablequeenwhite(int i,int j,vector<vector<string>>&board);
int ismovablekingwhite(int i,int j,vector<vector<string>>&board);

vector<int> isattackfromblackpawn(int i,int j,vector<vector<string>>&board);
vector<int> isattackfromblackknight(int i,int j,vector<vector<string>>&board);
vector<int> isattackfromblackbishop(int i,int j,vector<vector<string>>&board);
vector<int> isattackfromblackrook(int i,int j,vector<vector<string>>&board);
vector<int> isattackfromblackqueen(int i,int j,vector<vector<string>>&board);
vector<int> isattackfromblackking(int i,int j,vector<vector<string>>&board);

vector<int> isattackfromwhitepawn(int i,int j,vector<vector<string>>&board);
vector<int> isattackfromwhiteknight(int i,int j,vector<vector<string>>&board);
vector<int> isattackfromwhitebishop(int i,int j,vector<vector<string>>&board);
vector<int> isattackfromwhiterook(int i,int j,vector<vector<string>>&board);
vector<int> isattackfromwhitequeen(int i,int j,vector<vector<string>>&board);
vector<int> isattackfromwhiteking(int i,int j,vector<vector<string>>&board);

// White Pawns
int doeswhitepawn1exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhitepawn1exist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhitepawn1cango(vector<vector<string>>& board);

int doeswhitepawn2exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhitepawn2exist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhitepawn2cango(vector<vector<string>>& board);

int doeswhitepawn3exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhitepawn3exist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhitepawn3cango(vector<vector<string>>& board);

int doeswhitepawn4exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhitepawn4exist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhitepawn4cango(vector<vector<string>>& board);

int doeswhitepawn5exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhitepawn5exist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhitepawn5cango(vector<vector<string>>& board);

int doeswhitepawn6exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhitepawn6exist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhitepawn6cango(vector<vector<string>>& board);

int doeswhitepawn7exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhitepawn7exist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhitepawn7cango(vector<vector<string>>& board);

int doeswhitepawn8exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhitepawn8exist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhitepawn8cango(vector<vector<string>>& board);

// White Knights
int doeswhiteknight1exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhiteknight1exist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhiteknight1cango(vector<vector<string>>& board);

int doeswhiteknight2exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhiteknight2exist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhiteknight2cango(vector<vector<string>>& board);

// White Bishops
int doeswhitebishop1exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhitebishop1exist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhitebishop1cango(vector<vector<string>>& board);

int doeswhitebishop2exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhitebishop2exist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhitebishop2cango(vector<vector<string>>& board);

// White Rooks
int doeswhiterook1exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhiterook1exist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhiterook1cango(vector<vector<string>>& board);

int doeswhiterook2exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhiterook2exist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhiterook2cango(vector<vector<string>>& board);

// White Queen
int doeswhitequeenexist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoeswhitequeenexist(vector<vector<string>>& board);
vector<pair<int,int>> wherewhitequeencango(vector<vector<string>>& board);

// Black Pawns
int doesblackpawn1exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackpawn1exist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackpawn1cango(vector<vector<string>>& board);

int doesblackpawn2exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackpawn2exist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackpawn2cango(vector<vector<string>>& board);

int doesblackpawn3exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackpawn3exist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackpawn3cango(vector<vector<string>>& board);

int doesblackpawn4exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackpawn4exist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackpawn4cango(vector<vector<string>>& board);

int doesblackpawn5exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackpawn5exist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackpawn5cango(vector<vector<string>>& board);

int doesblackpawn6exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackpawn6exist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackpawn6cango(vector<vector<string>>& board);

int doesblackpawn7exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackpawn7exist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackpawn7cango(vector<vector<string>>& board);

int doesblackpawn8exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackpawn8exist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackpawn8cango(vector<vector<string>>& board);

// Black Knights
int doesblackknight1exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackknight1exist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackknight1cango(vector<vector<string>>& board);

int doesblackknight2exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackknight2exist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackknight2cango(vector<vector<string>>& board);

// Black Bishops
int doesblackbishop1exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackbishop1exist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackbishop1cango(vector<vector<string>>& board);

int doesblackbishop2exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackbishop2exist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackbishop2cango(vector<vector<string>>& board);

// Black Rooks
int doesblackrook1exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackrook1exist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackrook1cango(vector<vector<string>>& board);

int doesblackrook2exist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackrook2exist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackrook2cango(vector<vector<string>>& board);

// Black Queen
int doesblackqueenexist(vector<vector<string>>& board);
vector<pair<int,int>> wheredoesblackqueenexist(vector<vector<string>>& board);
vector<pair<int,int>> whereblackqueencango(vector<vector<string>>& board);

int cancheckbeblockedbywhite(vector<vector<string>>& board);
int cancheckbeblockedbyblack(vector<vector<string>>& board);

int iscapturablebyblackpawn(int i,int j,vector<vector<string>>&board){
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1].substr(0,9)=="blackpawn"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn";
            boardtemp[i+1][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1].substr(0,9)=="blackpawn"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn";
            boardtemp[i+1][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebyblackknight(int i,int j,vector<vector<string>>&board){
    if(i+2<=7&&j+1<=7){
        if(board[i+2][j+1].substr(0,11)=="blackknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight";
            boardtemp[i+2][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+2<=7&&j-1>=0){
        if(board[i+2][j-1].substr(0,11)=="blackknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight";
            boardtemp[i+2][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-2>=0&&j+1<=7){
        if(board[i-2][j+1].substr(0,11)=="blackknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight";
            boardtemp[i-2][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-2>=0&&j-1>=0){
        if(board[i-2][j-1].substr(0,11)=="blackknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight";
            boardtemp[i-2][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j+2<=7){
        if(board[i+1][j+2].substr(0,11)=="blackknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight";
            boardtemp[i+1][j+2]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j+2<=7){
        if(board[i-1][j+2].substr(0,11)=="blackknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight";
            boardtemp[i-1][j+2]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-2>=0){
        if(board[i-1][j-2].substr(0,11)=="blackknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight";
            boardtemp[i-1][j-2]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-2>=0){
        if(board[i+1][j-2].substr(0,11)=="blackknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight";
            boardtemp[i+1][j-2]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebyblackrook(int i,int j,vector<vector<string>>&board){
    vector<string> v={};
    for(int k=1;k<=7;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackrook";
                boardtemp[i-k-1][j]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackrook";
                boardtemp[i+k+1][j]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackrook";
                boardtemp[i][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackrook";
                boardtemp[i][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    return false;
}
int iscapturablebyblackbishop(int i,int j,vector<vector<string>>&board){
    vector<string>v;
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0&&j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackbishop";
                boardtemp[i-k-1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7&&j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackbishop";
                boardtemp[i+k+1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7&&j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackbishop";
                boardtemp[i+k+1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0&&j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackbishop";
                boardtemp[i-k-1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    return false;
}
int iscapturablebyblackqueen(int i,int j,vector<vector<string>>&board){
    vector<string>v;
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0&&j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackqueen";
                boardtemp[i-k-1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7&&j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackqueen";
                boardtemp[i+k+1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7&&j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackqueen";
                boardtemp[i+k+1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0&&j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackqueen";
                boardtemp[i-k-1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackqueen";
                boardtemp[i-k-1][j]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackqueen";
                boardtemp[i+k+1][j]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackqueen";
                boardtemp[i][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackqueen";
                boardtemp[i][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    return false;
}
int iscapturablebywhitepawn(int i,int j,vector<vector<string>>&board){
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1].substr(0,9)=="whitepawn"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn";
            boardtemp[i-1][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1].substr(0,9)=="whitepawn"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn";
            boardtemp[i-1][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebywhiteknight(int i,int j,vector<vector<string>>&board){
    if(i+2<=7&&j+1<=7){
        if(board[i+2][j+1].substr(0,11)=="whiteknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight";
            boardtemp[i+2][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+2<=7&&j-1>=0){
        if(board[i+2][j-1].substr(0,11)=="whiteknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight";
            boardtemp[i+2][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-2>=0&&j+1<=7){
        if(board[i-2][j+1].substr(0,11)=="whiteknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight";
            boardtemp[i-2][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-2>=0&&j-1>=0){
        if(board[i-2][j-1].substr(0,11)=="whiteknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight";
            boardtemp[i-2][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j+2<=7){
        if(board[i+1][j+2].substr(0,11)=="whiteknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight";
            boardtemp[i+1][j+2]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j+2<=7){
        if(board[i-1][j+2].substr(0,11)=="whiteknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight";
            boardtemp[i-1][j+2]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-2>=0){
        if(board[i-1][j-2].substr(0,11)=="whiteknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight";
            boardtemp[i-1][j-2]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-2>=0){
        if(board[i+1][j-2].substr(0,11)=="whiteknight"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight";
            boardtemp[i+1][j-2]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebywhiterook(int i,int j,vector<vector<string>>&board){
    vector<string> v={};
    for(int k=1;k<=7;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook"){
        int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whiterook";
                boardtemp[i-k-1][j]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whiterook";
                boardtemp[i+k+1][j]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whiterook";
                boardtemp[i][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whiterook";
                boardtemp[i][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    return false;
}
int iscapturablebywhitebishop(int i,int j,vector<vector<string>>&board){
    vector<string>v;
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="whitebishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0&&j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitebishop";
                boardtemp[i-k-1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="whitebishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7&&j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitebishop";
                boardtemp[i+k+1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="whitebishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7&&j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitebishop";
                boardtemp[i+k+1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="whitebishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0&&j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitebishop";
                boardtemp[i-k-1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    return false;
}
int iscapturablebywhitequeen(int i,int j,vector<vector<string>>&board){
    vector<string>v;
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0&&j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitequeen";
                boardtemp[i-k-1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7&&j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitequeen";
                boardtemp[i+k+1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7&&j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitequeen";
                boardtemp[i+k+1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0&&j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitequeen";
                boardtemp[i-k-1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitequeen";
                boardtemp[i+k+1][j]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitequeen";
                boardtemp[i-k-1][j]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitequeen";
                boardtemp[i][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitequeen";
                boardtemp[i][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    return false;
}
int iscapturablebyblackpawn1(int i,int j,vector<vector<string>>&board){
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1].substr(0,10)=="blackpawn1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn1";
            boardtemp[i+1][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1].substr(0,10)=="blackpawn1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn1";
            boardtemp[i+1][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebyblackpawn2(int i,int j,vector<vector<string>>&board){
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1].substr(0,10)=="blackpawn2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn2";
            boardtemp[i+1][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1].substr(0,10)=="blackpawn2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn2";
            boardtemp[i+1][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebyblackpawn3(int i,int j,vector<vector<string>>&board){
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1].substr(0,10)=="blackpawn3"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn3";
            boardtemp[i+1][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1].substr(0,10)=="blackpawn3"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn3";
            boardtemp[i+1][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebyblackpawn4(int i,int j,vector<vector<string>>&board){
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1].substr(0,10)=="blackpawn4"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn4";
            boardtemp[i+1][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1].substr(0,10)=="blackpawn4"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn4";
            boardtemp[i+1][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebyblackpawn5(int i,int j,vector<vector<string>>&board){
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1].substr(0,10)=="blackpawn5"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn5";
            boardtemp[i+1][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1].substr(0,10)=="blackpawn5"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn5";
            boardtemp[i+1][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebyblackpawn6(int i,int j,vector<vector<string>>&board){
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1].substr(0,10)=="blackpawn6"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn6";
            boardtemp[i+1][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1].substr(0,10)=="blackpawn6"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn6";
            boardtemp[i+1][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebyblackpawn7(int i,int j,vector<vector<string>>&board){
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1].substr(0,10)=="blackpawn7"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn7";
            boardtemp[i+1][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1].substr(0,10)=="blackpawn7"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn7";
            boardtemp[i+1][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebyblackpawn8(int i,int j,vector<vector<string>>&board){
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1].substr(0,10)=="blackpawn8"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn8";
            boardtemp[i+1][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1].substr(0,10)=="blackpawn8"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackpawn8";
            boardtemp[i+1][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}

int iscapturablebyblackknight1(int i,int j,vector<vector<string>>&board){
    if(i+2<=7&&j+1<=7){
        if(board[i+2][j+1].substr(0,12)=="blackknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight1";
            boardtemp[i+2][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+2<=7&&j-1>=0){
        if(board[i+2][j-1].substr(0,12)=="blackknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight1";
            boardtemp[i+2][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-2>=0&&j+1<=7){
        if(board[i-2][j+1].substr(0,12)=="blackknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight1";
            boardtemp[i-2][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-2>=0&&j-1>=0){
        if(board[i-2][j-1].substr(0,12)=="blackknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight1";
            boardtemp[i-2][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j+2<=7){
        if(board[i+1][j+2].substr(0,12)=="blackknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight1";
            boardtemp[i+1][j+2]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j+2<=7){
        if(board[i-1][j+2].substr(0,12)=="blackknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight1";
            boardtemp[i-1][j+2]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-2>=0){
        if(board[i-1][j-2].substr(0,12)=="blackknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight1";
            boardtemp[i-1][j-2]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-2>=0){
        if(board[i+1][j-2].substr(0,12)=="blackknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight1";
            boardtemp[i+1][j-2]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebyblackknight2(int i,int j,vector<vector<string>>&board){
    if(i+2<=7&&j+1<=7){
        if(board[i+2][j+1].substr(0,12)=="blackknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight2";
            boardtemp[i+2][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+2<=7&&j-1>=0){
        if(board[i+2][j-1].substr(0,12)=="blackknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight2";
            boardtemp[i+2][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-2>=0&&j+1<=7){
        if(board[i-2][j+1].substr(0,12)=="blackknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight2";
            boardtemp[i-2][j+1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-2>=0&&j-1>=0){
        if(board[i-2][j-1].substr(0,12)=="blackknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight2";
            boardtemp[i-2][j-1]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j+2<=7){
        if(board[i+1][j+2].substr(0,12)=="blackknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight2";
            boardtemp[i+1][j+2]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j+2<=7){
        if(board[i-1][j+2].substr(0,12)=="blackknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight2";
            boardtemp[i-1][j+2]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-2>=0){
        if(board[i-1][j-2].substr(0,12)=="blackknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight2";
            boardtemp[i-1][j-2]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-2>=0){
        if(board[i+1][j-2].substr(0,12)=="blackknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="blackknight2";
            boardtemp[i+1][j-2]="E";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebyblackrook1(int i,int j,vector<vector<string>>&board){
    vector<string> v={};
    for(int k=1;k<=7;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackrook1";
                boardtemp[i-k-1][j]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackrook1";
                boardtemp[i+k+1][j]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackrook1";
                boardtemp[i][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackrook1";
                boardtemp[i][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    return false;
}
int iscapturablebyblackrook2(int i,int j,vector<vector<string>>&board){
    vector<string> v={};
    for(int k=1;k<=7;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackrook2";
                boardtemp[i-k-1][j]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackrook2";
                boardtemp[i+k+1][j]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackrook2";
                boardtemp[i][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackrook2";
                boardtemp[i][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    return false;
}
int iscapturablebyblackbishop1(int i,int j,vector<vector<string>>&board){
    vector<string>v;
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0&&j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackbishop1";
                boardtemp[i-k-1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7&&j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackbishop1";
                boardtemp[i+k+1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7&&j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackbishop1";
                boardtemp[i+k+1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0&&j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackbishop1";
                boardtemp[i-k-1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    return false;
}
int iscapturablebyblackbishop2(int i,int j,vector<vector<string>>&board){
    vector<string>v;
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0&&j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackbishop2";
                boardtemp[i-k-1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7&&j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackbishop2";
                boardtemp[i+k+1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7&&j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackbishop2";
                boardtemp[i+k+1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0&&j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="blackbishop2";
                boardtemp[i-k-1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    return false;
}
int iscapturablebywhitepawn1(int i,int j,vector<vector<string>>&board){
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1].substr(0,10)=="whitepawn1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn1";
            boardtemp[i-1][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1].substr(0,10)=="whitepawn1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn1";
            boardtemp[i-1][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebywhitepawn2(int i,int j,vector<vector<string>>&board){
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1].substr(0,10)=="whitepawn2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn2";
            boardtemp[i-1][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1].substr(0,10)=="whitepawn2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn2";
            boardtemp[i-1][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebywhitepawn3(int i,int j,vector<vector<string>>&board){
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1].substr(0,10)=="whitepawn3"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn3";
            boardtemp[i-1][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1].substr(0,10)=="whitepawn3"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn3";
            boardtemp[i-1][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebywhitepawn4(int i,int j,vector<vector<string>>&board){
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1].substr(0,10)=="whitepawn4"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn4";
            boardtemp[i-1][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1].substr(0,10)=="whitepawn4"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn4";
            boardtemp[i-1][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebywhitepawn5(int i,int j,vector<vector<string>>&board){
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1].substr(0,10)=="whitepawn5"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn5";
            boardtemp[i-1][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1].substr(0,10)=="whitepawn5"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn5";
            boardtemp[i-1][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebywhitepawn6(int i,int j,vector<vector<string>>&board){
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1].substr(0,10)=="whitepawn6"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn6";
            boardtemp[i-1][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1].substr(0,10)=="whitepawn6"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn6";
            boardtemp[i-1][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebywhitepawn7(int i,int j,vector<vector<string>>&board){
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1].substr(0,10)=="whitepawn7"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn7";
            boardtemp[i-1][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1].substr(0,10)=="whitepawn7"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn7";
            boardtemp[i-1][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebywhitepawn8(int i,int j,vector<vector<string>>&board){
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1].substr(0,10)=="whitepawn8"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn8";
            boardtemp[i-1][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1].substr(0,10)=="whitepawn8"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whitepawn8";
            boardtemp[i-1][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebywhiteknight1(int i,int j,vector<vector<string>>&board){
    if(i+2<=7&&j+1<=7){
        if(board[i+2][j+1].substr(0,12)=="whiteknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight1";
            boardtemp[i+2][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+2<=7&&j-1>=0){
        if(board[i+2][j-1].substr(0,12)=="whiteknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight1";
            boardtemp[i+2][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-2>=0&&j+1<=7){
        if(board[i-2][j+1].substr(0,12)=="whiteknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight1";
            boardtemp[i-2][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-2>=0&&j-1>=0){
        if(board[i-2][j-1].substr(0,12)=="whiteknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight1";
            boardtemp[i-2][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j+2<=7){
        if(board[i+1][j+2].substr(0,12)=="whiteknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight1";
            boardtemp[i+1][j+2]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j+2<=7){
        if(board[i-1][j+2].substr(0,12)=="whiteknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight1";
            boardtemp[i-1][j+2]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-2>=0){
        if(board[i-1][j-2].substr(0,12)=="whiteknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight1";
            boardtemp[i-1][j-2]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-2>=0){
        if(board[i+1][j-2].substr(0,12)=="whiteknight1"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight1";
            boardtemp[i+1][j-2]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebywhiteknight2(int i,int j,vector<vector<string>>&board){
    if(i+2<=7&&j+1<=7){
        if(board[i+2][j+1].substr(0,12)=="whiteknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight2";
            boardtemp[i+2][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+2<=7&&j-1>=0){
        if(board[i+2][j-1].substr(0,12)=="whiteknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight2";
            boardtemp[i+2][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-2>=0&&j+1<=7){
        if(board[i-2][j+1].substr(0,12)=="whiteknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight2";
            boardtemp[i-2][j+1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-2>=0&&j-1>=0){
        if(board[i-2][j-1].substr(0,12)=="whiteknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight2";
            boardtemp[i-2][j-1]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j+2<=7){
        if(board[i+1][j+2].substr(0,12)=="whiteknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight2";
            boardtemp[i+1][j+2]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j+2<=7){
        if(board[i-1][j+2].substr(0,12)=="whiteknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight2";
            boardtemp[i-1][j+2]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i-1>=0&&j-2>=0){
        if(board[i-1][j-2].substr(0,12)=="whiteknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight2";
            boardtemp[i-1][j-2]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-2>=0){
        if(board[i+1][j-2].substr(0,12)=="whiteknight2"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="whiteknight2";
            boardtemp[i+1][j-2]="E";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebywhiterook1(int i,int j,vector<vector<string>>&board){
    vector<string> v={};
    for(int k=1;k<=7;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook1"){
        int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whiterook1";
                boardtemp[i-k-1][j]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whiterook1";
                boardtemp[i+k+1][j]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whiterook1";
                boardtemp[i][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whiterook1";
                boardtemp[i][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    return false;
}
int iscapturablebywhiterook2(int i,int j,vector<vector<string>>&board){
    vector<string> v={};
    for(int k=1;k<=7;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook2"){
        int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whiterook2";
                boardtemp[i-k-1][j]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(i+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whiterook2";
                boardtemp[i+k+1][j]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j-k-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whiterook2";
                boardtemp[i][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                if(j+k+1<=7){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whiterook2";
                boardtemp[i][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
                }
            }
        }
    }
    return false;
}
int iscapturablebywhitebishop1(int i,int j,vector<vector<string>>&board){
    vector<string>v;
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,12)=="whitebishop1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitebishop1";
                boardtemp[i-k-1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,12)=="whitebishop1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitebishop1";
                boardtemp[i+k+1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,12)=="whitebishop1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitebishop1";
                boardtemp[i+k+1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,12)=="whitebishop1"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitebishop1";
                boardtemp[i-k-1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
            }
        }
    }
    return false;
}
int iscapturablebywhitebishop2(int i,int j,vector<vector<string>>&board){
    vector<string>v;
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,12)=="whitebishop2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitebishop2";
                boardtemp[i-k-1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,12)=="whitebishop2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitebishop2";
                boardtemp[i+k+1][j-k-1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,12)=="whitebishop2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitebishop2";
                boardtemp[i+k+1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,12)=="whitebishop2"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="whitebishop2";
                boardtemp[i-k-1][j+k+1]="E";
                vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
                if(!ischeckbyblack(v1[0].first,v1[0].second,boardtemp))
                return true;
            }
        }
    }
    return false;
}
vector<int> isattackfromwhitepawn(int i,int j,vector<vector<string>>&board){
    vector<int>v;
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1].substr(0,9)=="whitepawn"){
            v.push_back(i-1);
            v.push_back(j+1);
            return v;
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1].substr(0,9)=="whitepawn"){
            v.push_back(i-1);
            v.push_back(j-1);
            return v;
        }
    }
    return v;
}
vector<int> isattackfromwhiteknight(int i,int j,vector<vector<string>>&board){
    vector<int>v;
    if(i+2<=7&&j+1<=7){
        if(board[i+2][j+1].substr(0,11)=="whiteknight"){
            v.push_back(i+2);
            v.push_back(j+1);
            return v;
        }
    }
    if(i+2<=7&&j-1>=0){
        if(board[i+2][j-1].substr(0,11)=="whiteknight"){
            v.push_back(i+2);
            v.push_back(j-1);
            return v;
        }
    }
    if(i-2>=0&&j+1<=7){
        if(board[i-2][j+1].substr(0,11)=="whiteknight"){
            v.push_back(i-2);
            v.push_back(j+1);
            return v;
        }
    }
    if(i-2>=0&&j-1>=0){
        if(board[i-2][j-1].substr(0,11)=="whiteknight"){
            v.push_back(i-2);
            v.push_back(j-1);
            return v;
        }
    }
    if(i+1<=7&&j+2<=7){
        if(board[i+1][j+2].substr(0,11)=="whiteknight"){
            v.push_back(i+1);
            v.push_back(j+2);
            return v;
        }
    }
    if(i-1>=0&&j+2<=7){
        if(board[i-1][j+2].substr(0,11)=="whiteknight"){
            v.push_back(i-1);
            v.push_back(j+2);
            return v;
        }
    }
    if(i-1>=0&&j-2>=0){
        if(board[i-1][j-2].substr(0,11)=="whiteknight"){
            v.push_back(i-1);
            v.push_back(j-2);
            return v;
        }
    }
    if(i+1<=7&&j-2>=0){
        if(board[i+1][j-2].substr(0,11)=="whiteknight"){
            v.push_back(i+1);
            v.push_back(j-2);
            return v;
        }
    }
    return v;
}
vector<int> isattackfromwhiterook(int i,int j,vector<vector<string>>&board){
    vector<int>v;
    if(iscapturablebywhiterook(i,j,board)){
        for(int k=1;k<=7;k++){
            if(i-k>=0){
                if(board[i-k][j].substr(0,9)=="whiterook"){
                    v.push_back(i-k);
                    v.push_back(j);
                    return v;
                }
            }
        }
    }
    if(iscapturablebywhiterook(i,j,board)){
        for(int k=1;k<=7;k++){
            if(i+k<=7){
                if(board[i+k][j].substr(0,9)=="whiterook"){
                    v.push_back(i+k);
                    v.push_back(j);
                    return v;
                }
            }
        }
    }
    if(iscapturablebywhiterook(i,j,board)){
        for(int k=1;k<=7;k++){
            if(j-k>=0){
                if(board[i][j-k].substr(0,9)=="whiterook"){
                    v.push_back(i);
                    v.push_back(j-k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebywhiterook(i,j,board)){
        for(int k=1;k<=7;k++){
            if(j+k<=7){
                if(board[i][j+k].substr(0,9)=="whiterook"){
                    v.push_back(i);
                    v.push_back(j+k);
                    return v;
                }
            }
        }
    }
    return v;
}
vector<int> isattackfromwhitebishop(int i,int j,vector<vector<string>>&board){
    vector<int>v;
    if(iscapturablebywhitebishop(i,j,board)){
        for(int k=1;k<8;k++){
            if(i-k>=0&&j-k>=0){
                if(board[i-k][j-k].substr(0,11)=="whitebishop"){
                    v.push_back(i-k);
                    v.push_back(j-k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebywhitebishop(i,j,board)){
        for(int k=1;k<8;k++){
            if(i+k<=7&&j-k>=0){
                if(board[i+k][j-k].substr(0,11)=="whitebishop"){
                    v.push_back(i+k);
                    v.push_back(j-k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebywhitebishop(i,j,board)){
        for(int k=1;k<8;k++){
            if(i-k>=0&&j+k<=7){
                if(board[i-k][j+k].substr(0,11)=="whitebishop"){
                    v.push_back(i-k);
                    v.push_back(j+k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebywhitebishop(i,j,board)){
        for(int k=1;k<8;k++){
            if(i+k<=7&&j+k<=7){
                if(board[i+k][j+k].substr(0,11)=="whitebishop"){
                    v.push_back(i+k);
                    v.push_back(j+k);
                    return v;
                }
            }
        }
    }
    return v;
}
vector<int> isattackfromwhitequeen(int i,int j,vector<vector<string>>&board){
    vector<int>v;
    if(iscapturablebywhitequeen(i,j,board)){
        for(int k=1;k<8;k++){
            if(i-k>=0&&j-k>=0){
                if(board[i-k][j-k].substr(0,10)=="whitequeen"){
                    v.push_back(i-k);
                    v.push_back(j-k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebywhitequeen(i,j,board)){
        for(int k=1;k<8;k++){
            if(i+k<=7&&j-k>=0){
                if(board[i+k][j-k].substr(0,10)=="whitequeen"){
                    v.push_back(i+k);
                    v.push_back(j-k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebywhitequeen(i,j,board)){
        for(int k=1;k<8;k++){
            if(i-k>=0&&j+k<=7){
                if(board[i-k][j+k].substr(0,10)=="whitequeen"){
                    v.push_back(i-k);
                    v.push_back(j+k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebywhitequeen(i,j,board)){
        for(int k=1;k<8;k++){
            if(i+k<=7&&j+k<=7){
                if(board[i+k][j+k].substr(0,10)=="whitequeen"){
                    v.push_back(i+k);
                    v.push_back(j+k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebywhitequeen(i,j,board)){
        for(int k=1;k<=7;k++){
            if(i-k>=0){
                if(board[i-k][j].substr(0,10)=="whitequeen"){
                    v.push_back(i-k);
                    v.push_back(j);
                    return v;
                }
            }
        }
    }
    if(iscapturablebywhitequeen(i,j,board)){
        for(int k=1;k<=7;k++){
            if(i+k<=7){
                if(board[i+k][j].substr(0,10)=="whitequeen"){
                    v.push_back(i+k);
                    v.push_back(j);
                    return v;
                }
            }
        }
    }
    if(iscapturablebywhitequeen(i,j,board)){
        for(int k=1;k<=7;k++){
            if(j-k>=0){
                if(board[i][j-k].substr(0,10)=="whitequeen"){
                    v.push_back(i);
                    v.push_back(j-k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebywhitequeen(i,j,board)){
        for(int k=1;k<=7;k++){
            if(j+k<=7){
                if(board[i][j+k].substr(0,10)=="whitequeen"){
                    v.push_back(i);
                    v.push_back(j+k);
                    return v;
                }
            }
        }
    }
    return v;
}
vector<int> isattackfromblackpawn(int i,int j,vector<vector<string>>&board){
    vector<int>v;
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1].substr(0,9)=="blackpawn"){
            v.push_back(i+1);
            v.push_back(j+1);
            return v;
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1].substr(0,9)=="blackpawn"){
            v.push_back(i+1);
            v.push_back(j-1);
            return v;
        }
    }
    return v;
}
vector<int> isattackfromblackknight(int i,int j,vector<vector<string>>&board){
    vector<int>v;
    if(i+2<=7&&j+1<=7){
        if(board[i+2][j+1].substr(0,11)=="blackknight"){
            v.push_back(i+2);
            v.push_back(j+1);
            return v;
        }
    }
    if(i+2<=7&&j-1>=0){
        if(board[i+2][j-1].substr(0,11)=="blackknight"){
            v.push_back(i+2);
            v.push_back(j-1);
            return v;
        }
    }
    if(i-2>=0&&j+1<=7){
        if(board[i-2][j+1].substr(0,11)=="blackknight"){
            v.push_back(i-2);
            v.push_back(j+1);
            return v;
        }
    }
    if(i-2>=0&&j-1>=0){
        if(board[i-2][j-1].substr(0,11)=="blackknight"){
            v.push_back(i-2);
            v.push_back(j-1);
            return v;
        }
    }
    if(i+1<=7&&j+2<=7){
        if(board[i+1][j+2].substr(0,11)=="blackknight"){
            v.push_back(i+1);
            v.push_back(j+2);
            return v;
        }
    }
    if(i-1>=0&&j+2<=7){
        if(board[i-1][j+2].substr(0,11)=="blackknight"){
            v.push_back(i-1);
            v.push_back(j+2);
            return v;
        }
    }
    if(i-1>=0&&j-2>=0){
        if(board[i-1][j-2].substr(0,11)=="blackknight"){
            v.push_back(i-1);
            v.push_back(j-2);
            return v;
        }
    }
    if(i+1<=7&&j-2>=0){
        if(board[i+1][j-2].substr(0,11)=="blackknight"){
            v.push_back(i+1);
            v.push_back(j-2);
            return v;
        }
    }
    return v;
}
vector<int> isattackfromblackrook(int i,int j,vector<vector<string>>&board){
    vector<int>v;
    if(iscapturablebyblackrook(i,j,board)){
        for(int k=1;k<=7;k++){
            if(i-k>=0){
                if(board[i-k][j].substr(0,9)=="blackrook"){
                    v.push_back(i-k);
                    v.push_back(j);
                    return v;
                }
            }
        }
    }
    if(iscapturablebyblackrook(i,j,board)){
        for(int k=1;k<=7;k++){
            if(i+k<=7){
                if(board[i+k][j].substr(0,9)=="blackrook"){
                    v.push_back(i+k);
                    v.push_back(j);
                    return v;
                }
            }
        }
    }
    if(iscapturablebyblackrook(i,j,board)){
        for(int k=1;k<=7;k++){
            if(j-k>=0){
                if(board[i][j-k].substr(0,9)=="blackrook"){
                    v.push_back(i);
                    v.push_back(j-k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebyblackrook(i,j,board)){
        for(int k=1;k<=7;k++){
            if(j+k<=7){
                if(board[i][j+k].substr(0,9)=="blackrook"){
                    v.push_back(i);
                    v.push_back(j+k);
                    return v;
                }
            }
        }
    }
    return v;
}
vector<int> isattackfromblackbishop(int i,int j,vector<vector<string>>&board){
    vector<int>v;
    if(iscapturablebyblackbishop(i,j,board)){
        for(int k=1;k<8;k++){
            if(i-k>=0&&j-k>=0){
                if(board[i-k][j-k].substr(0,11)=="blackbishop"){
                    v.push_back(i-k);
                    v.push_back(j-k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebyblackbishop(i,j,board)){
        for(int k=1;k<8;k++){
            if(i+k<=7&&j-k>=0){
                if(board[i+k][j-k].substr(0,11)=="blackbishop"){
                    v.push_back(i+k);
                    v.push_back(j-k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebyblackbishop(i,j,board)){
        for(int k=1;k<8;k++){
            if(i-k>=0&&j+k<=7){
                if(board[i-k][j+k].substr(0,11)=="blackbishop"){
                    v.push_back(i-k);
                    v.push_back(j+k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebyblackbishop(i,j,board)){
        for(int k=1;k<8;k++){
            if(i+k<=7&&j+k<=7){
                if(board[i+k][j+k].substr(0,11)=="blackbishop"){
                    v.push_back(i+k);
                    v.push_back(j+k);
                    return v;
                }
            }
        }
    }
    return v;
}
vector<int> isattackfromblackqueen(int i,int j,vector<vector<string>>&board){
    vector<int>v;
    if(iscapturablebyblackqueen(i,j,board)){
        for(int k=1;k<8;k++){
            if(i-k>=0&&j-k>=0){
                if(board[i-k][j-k].substr(0,10)=="blackqueen"){
                    v.push_back(i-k);
                    v.push_back(j-k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebyblackqueen(i,j,board)){
        for(int k=1;k<8;k++){
            if(i+k<=7&&j-k>=0){
                if(board[i+k][j-k].substr(0,10)=="blackqueen"){
                    v.push_back(i+k);
                    v.push_back(j-k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebyblackqueen(i,j,board)){
        for(int k=1;k<8;k++){
            if(i-k>=0&&j+k<=7){
                if(board[i-k][j+k].substr(0,10)=="blackqueen"){
                    v.push_back(i-k);
                    v.push_back(j+k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebyblackqueen(i,j,board)){
        for(int k=1;k<8;k++){
            if(i+k<=7&&j+k<=7){
                if(board[i+k][j+k].substr(0,10)=="blackqueen"){
                    v.push_back(i+k);
                    v.push_back(j+k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebyblackqueen(i,j,board)){
        for(int k=1;k<=7;k++){
            if(i-k>=0){
                if(board[i-k][j].substr(0,10)=="blackqueen"){
                    v.push_back(i-k);
                    v.push_back(j);
                    return v;
                }
            }
        }
    }
    if(iscapturablebyblackqueen(i,j,board)){
        for(int k=1;k<=7;k++){
            if(i+k<=7){
                if(board[i+k][j].substr(0,10)=="blackqueen"){
                    v.push_back(i+k);
                    v.push_back(j);
                    return v;
                }
            }
        }
    }
    if(iscapturablebyblackqueen(i,j,board)){
        for(int k=1;k<=7;k++){
            if(j-k>=0){
                if(board[i][j-k].substr(0,10)=="blackqueen"){
                    v.push_back(i);
                    v.push_back(j-k);
                    return v;
                }
            }
        }
    }
    if(iscapturablebyblackqueen(i,j,board)){
        for(int k=1;k<=7;k++){
            if(j+k<=7){
                if(board[i][j+k].substr(0,10)=="blackqueen"){
                    v.push_back(i);
                    v.push_back(j+k);
                    return v;
                }
            }
        }
    }
    return v;
}
int isattackedbywhite(int i,int j,vector<vector<string>>&board){
    //attack by whitepawn
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1]!="E"&&board[i-1][j-1].substr(0,9)=="whitepawn"){
            return true;
        }
    }
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1]!="E"&&board[i-1][j+1].substr(0,9)=="whitepawn"){
            return true;
        }
    }
    //attack by whiteknight
    if(i+2<=7&&j-1>=0){
        if(board[i+2][j-1]!="E"&&board[i+2][j-1].substr(0,11)=="whiteknight"){
            return true;
        }
    }
    if(i+2<=7&&j+1<=7){
        if(board[i+2][j+1]!="E"&&board[i+2][j+1].substr(0,11)=="whiteknight"){
            return true;
        }
    }
    if(i-2>=0&&j+1<=7){
        if(board[i-2][j+1]!="E"&&board[i-2][j+1].substr(0,11)=="whiteknight"){
            return true;
        }
    }
    if(i-2>=0&&j-1>=0){
        if(board[i-2][j-1]!="E"&&board[i-2][j-1].substr(0,11)=="whiteknight"){
            return true;
        }
    }
    if(i+1<=7&&j+2<=7){
        if(board[i+1][j+2]!="E"&&board[i+1][j+2].substr(0,11)=="whiteknight"){
            return true;
        }
    }
    if(i-1>=0&&j+2<=7){
        if(board[i-1][j+2]!="E"&&board[i-1][j+2].substr(0,11)=="whiteknight"){
            return true;
        }
    }
    if(i+1<=7&&j-2>=0){
        if(board[i+1][j-2]!="E"&&board[i+1][j-2].substr(0,11)=="whiteknight"){
            return true;
        }
    }
    if(i-1>=0&&j-2>=0){
        if(board[i-1][j-2]!="E"&&board[i-1][j-2].substr(0,11)=="whiteknight"){
            return true;
        }
    }
    //attack by whiteking
    if(i+1<=7){
        if(board[i+1][j]!="E"&&board[i+1][j].substr(0,9)=="whiteking"){
            return true;
        }
    }
    if(i-1>=0){
        if(board[i-1][j]!="E"&&board[i-1][j].substr(0,9)=="whiteking"){
            return true;
        }
    }
    if(j+1<=7){
        if(board[i][j+1]!="E"&&board[i][j+1].substr(0,9)=="whiteking"){
            return true;
        }
    }
    if(j-1>=0){
        if(board[i][j-1]!="E"&&board[i][j-1].substr(0,9)=="whiteking"){
            return true;
        }
    }
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1]!="E"&&board[i+1][j+1].substr(0,9)=="whiteking"){
            return true;
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1]!="E"&&board[i+1][j-1].substr(0,9)=="whiteking"){
            return true;
        }
    }
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1]!="E"&&board[i-1][j+1].substr(0,9)=="whiteking"){
            return true;
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1]!="E"&&board[i-1][j-1].substr(0,9)=="whiteking"){
            return true;
        }
    }
    //attack by whiterook
    vector<string> v={};
    for(int k=1;k<=7;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="whiterook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    //attack  by whitebishop
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="whitebishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="whitebishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="whitebishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="whitebishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    //attack by whitequeen
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    //attack as white queen rookstyle
    for(int k=1;k<=7;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="whitequeen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    return false;
}
int isattackedbyblack(int i,int j,vector<vector<string>>&board){
    //attack by blackpawn
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1]!="E"&&board[i+1][j-1].substr(0,9)=="blackpawn"){
            return true;
        }
    }
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1]!="E"&&board[i+1][j+1].substr(0,9)=="blackpawn"){
            return true;
        }
    }
    //attack by blackknight
    if(i+2<=7&&j-1>=0){
        if(board[i+2][j-1]!="E"&&board[i+2][j-1].substr(0,11)=="blackknight"){
            return true;
        }
    }
    if(i+2<=7&&j+1<=7){
        if(board[i+2][j+1]!="E"&&board[i+2][j+1].substr(0,11)=="blackknight"){
            return true;
        }
    }
    if(i-2>=0&&j+1<=7){
        if(board[i-2][j+1]!="E"&&board[i-2][j+1].substr(0,11)=="blackknight"){
            return true;
        }
    }
    if(i-2>=0&&j-1>=0){
        if(board[i-2][j-1]!="E"&&board[i-2][j-1].substr(0,11)=="blackknight"){
            return true;
        }
    }
    if(i+1<=7&&j+2<=7){
        if(board[i+1][j+2]!="E"&&board[i+1][j+2].substr(0,11)=="blackknight"){
            return true;
        }
    }
    if(i-1>=0&&j+2<=7){
        if(board[i-1][j+2]!="E"&&board[i-1][j+2].substr(0,11)=="blackknight"){
            return true;
        }
    }
    if(i+1<=7&&j-2>=0){
        if(board[i+1][j-2]!="E"&&board[i+1][j-2].substr(0,11)=="blackknight"){
            return true;
        }
    }
    if(i-1>=0&&j-2>=0){
        if(board[i-1][j-2]!="E"&&board[i-1][j-2].substr(0,11)=="blackknight"){
            return true;
        }
    }
    //attack by whiteking
    if(i+1<=7){
        if(board[i+1][j]!="E"&&board[i+1][j].substr(0,9)=="blackking"){
            return true;
        }
    }
    if(i-1>=0){
        if(board[i-1][j]!="E"&&board[i-1][j].substr(0,9)=="blackking"){
            return true;
        }
    }
    if(j+1<=7){
        if(board[i][j+1]!="E"&&board[i][j+1].substr(0,9)=="blackking"){
            return true;
        }
    }
    if(j-1>=0){
        if(board[i][j-1]!="E"&&board[i][j-1].substr(0,9)=="blackking"){
            return true;
        }
    }
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1]!="E"&&board[i+1][j+1].substr(0,9)=="blackking"){
            return true;
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1]!="E"&&board[i+1][j-1].substr(0,9)=="blackking"){
            return true;
        }
    }
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1]!="E"&&board[i-1][j+1].substr(0,9)=="blackking"){
            return true;
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1]!="E"&&board[i-1][j-1].substr(0,9)=="blackking"){
            return true;
        }
    }
    //attack by blackrook
    vector<string> v={};
    for(int k=1;k<=7;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,9)=="blackrook"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    //attack  by whitebishop
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,11)=="blackbishop"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    //attack by whitequeen
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    //attack as white queen rookstyle
    for(int k=1;k<=7;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    v.clear();
    for(int k=1;k<=7;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    for(int k=0;k<v.size();k++){
        if(v[k]!="E"&&v[k].substr(0,10)=="blackqueen"){
            int l=0;
            for(int z=0;z<k;z++){
                if(v[z]=="E"){
                    l++;
                }
            }
            if(l==k){
                return true;
            }
        }
    }
    return false;
}
int iscapturablebyblackking(int i,int j,vector<vector<string>>&board){
    if(i+1<=7){
        if(board[i+1][j].substr(0,9)=="blackking"&&!isattackedbywhite(i+1,j,board)){
            return true;
        }
    }
    if(i-1>=0){
        if(board[i-1][j].substr(0,9)=="blackking"&&!isattackedbywhite(i-1,j,board)){
            return true;
        }
    }
    if(j+1<=7){
        if(board[i][j+1].substr(0,9)=="blackking"&&!isattackedbywhite(i,j+1,board)){
            return true;
        }
    }
    if(j-1>=0){
        if(board[i][j-1].substr(0,9)=="blackking"&&!isattackedbywhite(i,j-1,board)){
            return true;
        }
    }
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1].substr(0,9)=="blackking"&&!isattackedbywhite(i+1,j+1,board)){
            return true;
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1].substr(0,9)=="blackking"&&!isattackedbywhite(i+1,j-1,board)){
            return true;
        }
    }
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1].substr(0,9)=="blackking"&&!isattackedbywhite(i-1,j+1,board)){
            return true;
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1].substr(0,9)=="blackking"&&!isattackedbywhite(i-1,j-1,board)){
            return true;
        }
    }
    return false;
}
int ischeckbywhite(int i,int j,vector<vector<string>>&board){
    if(isattackedbywhite(i,j,board)){
        return true;
    }
    return false;
}
int ischeckbyblack(int i,int j,vector<vector<string>>&board){
    if(isattackedbyblack(i,j,board)){
        return true;
    }
    return false;
}
int isstalematebyblack(int i,int j,vector<vector<string>>&board){
    vector<pair<int,int>>v=wheredoesblackkingexist(board);
    if(ismovablekingblack(v[0].first,v[0].second,board)){
        return false;
    }
    if(doesblackpawn1exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn1exist(board);
        vector<pair<int,int>>v2=whereblackpawn1cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackpawn1";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doesblackpawn2exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn2exist(board);
        vector<pair<int,int>>v2=whereblackpawn2cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackpawn2";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doesblackpawn3exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn3exist(board);
        vector<pair<int,int>>v2=whereblackpawn3cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackpawn3";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doesblackpawn4exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn4exist(board);
        vector<pair<int,int>>v2=whereblackpawn4cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackpawn4";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doesblackpawn5exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn5exist(board);
        vector<pair<int,int>>v2=whereblackpawn5cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackpawn5";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doesblackpawn6exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn6exist(board);
        vector<pair<int,int>>v2=whereblackpawn6cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackpawn6";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doesblackpawn7exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn7exist(board);
        vector<pair<int,int>>v2=whereblackpawn7cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackpawn7";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doesblackpawn8exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn8exist(board);
        vector<pair<int,int>>v2=whereblackpawn8cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackpawn8";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doesblackknight1exist(board)){
        vector<pair<int,int>>v1=wheredoesblackknight1exist(board);
        vector<pair<int,int>>v2=whereblackknight1cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackknight1";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doesblackknight2exist(board)){
        vector<pair<int,int>>v1=wheredoesblackknight2exist(board);
        vector<pair<int,int>>v2=whereblackknight2cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackknight2";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doesblackbishop1exist(board)){
        vector<pair<int,int>>v1=wheredoesblackbishop1exist(board);
        vector<pair<int,int>>v2=whereblackbishop1cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackbishop1";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doesblackbishop2exist(board)){
        vector<pair<int,int>>v1=wheredoesblackbishop2exist(board);
        vector<pair<int,int>>v2=whereblackbishop2cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackbishop2";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doesblackrook1exist(board)){
        vector<pair<int,int>>v1=wheredoesblackrook1exist(board);
        vector<pair<int,int>>v2=whereblackrook1cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackrook1";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doesblackrook2exist(board)){
        vector<pair<int,int>>v1=wheredoesblackrook2exist(board);
        vector<pair<int,int>>v2=whereblackrook2cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackrook2";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doesblackqueenexist(board)){
        vector<pair<int,int>>v1=wheredoesblackqueenexist(board);
        vector<pair<int,int>>v2=whereblackqueencango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="blackqueen";
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    return true;
}
int isstalematebywhite(int i,int j,vector<vector<string>>&board){
    vector<pair<int,int>>v=wheredoeswhitekingexist(board);
    if(ismovablekingwhite(v[0].first,v[0].second,board)){
        return false;
    }
    if(doeswhitepawn1exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn1exist(board);
        vector<pair<int,int>>v2=wherewhitepawn1cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whitepawn1";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doeswhitepawn2exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn2exist(board);
        vector<pair<int,int>>v2=wherewhitepawn2cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whitepawn2";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doeswhitepawn3exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn3exist(board);
        vector<pair<int,int>>v2=wherewhitepawn3cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whitepawn3";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doeswhitepawn4exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn4exist(board);
        vector<pair<int,int>>v2=wherewhitepawn4cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whitepawn4";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doeswhitepawn5exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn5exist(board);
        vector<pair<int,int>>v2=wherewhitepawn5cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whitepawn5";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doeswhitepawn6exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn6exist(board);
        vector<pair<int,int>>v2=wherewhitepawn6cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whitepawn6";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doeswhitepawn7exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn7exist(board);
        vector<pair<int,int>>v2=wherewhitepawn7cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whitepawn7";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doeswhitepawn8exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn8exist(board);
        vector<pair<int,int>>v2=wherewhitepawn8cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whitepawn8";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doeswhiteknight1exist(board)){
        vector<pair<int,int>>v1=wheredoeswhiteknight1exist(board);
        vector<pair<int,int>>v2=wherewhiteknight1cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whiteknight1";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doeswhiteknight2exist(board)){
        vector<pair<int,int>>v1=wheredoeswhiteknight2exist(board);
        vector<pair<int,int>>v2=wherewhiteknight2cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whiteknight2";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doeswhitebishop1exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitebishop1exist(board);
        vector<pair<int,int>>v2=wherewhitebishop1cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whitebishop1";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doeswhitebishop2exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitebishop2exist(board);
        vector<pair<int,int>>v2=wherewhitebishop2cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whitebishop2";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doeswhiterook1exist(board)){
        vector<pair<int,int>>v1=wheredoeswhiterook1exist(board);
        vector<pair<int,int>>v2=wherewhiterook1cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whiterook1";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doeswhiterook2exist(board)){
        vector<pair<int,int>>v1=wheredoeswhiterook2exist(board);
        vector<pair<int,int>>v2=wherewhiterook2cango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whiterook2";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    if(doeswhitequeenexist(board)){
        vector<pair<int,int>>v1=wheredoeswhitequeenexist(board);
        vector<pair<int,int>>v2=wherewhitequeencango(board);
        for(int k=0;k<v2.size();k++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v1[k].first][v1[k].second]="whitequeen";
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return false;
            }
        }
    }
    return true;
}
int iswhite(string h){
    if(h[0]=='w'){
        return true;
    }
    return false;
}
int isblack(string h){
    if(h[0]=='b'){
        return true;
    }
    return false;
}
int ismovablepawnblack(int i,int j,vector<vector<string>>&board){
    if(i-1>=0){
        if(board[i-1][j]=="E"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="E";
            boardtemp[i-1][j]="blackpawn";
            vector<pair<int,int>>v=wheredoesblackkingexist(board);
            if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
            return true;
            }
        }
    }
    if(i-1>=0&&j-1>=0){
        if(iswhite(board[i-1][j-1])){
        vector<vector<string>>boardtemp=board;
        boardtemp[i][j]="E";
        boardtemp[i-1][j-1]="blackpawn";
        vector<pair<int,int>>v=wheredoesblackkingexist(board);
        if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
            return true;
        }
        }
    }
    if(i-1>=0&&j+1<=7){
        if(iswhite(board[i-1][j+1])){
        vector<vector<string>>boardtemp=board;
        boardtemp[i][j]="E";
        boardtemp[i-1][j+1]="blackpawn";
        vector<pair<int,int>>v=wheredoesblackkingexist(board);
        if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
            return true;
        }
        }
    }
    return false;
}
int ismovableknightblack(int i,int j,vector<vector<string>>&board){
    if(j+2<=7&&i-1>=0&&(iswhite(board[i-1][j+2])||board[i-1][j+2]=="E")){
        vector<vector<string>>boardtemp=board;
        boardtemp[i][j]="E";
        boardtemp[i-1][j+2]="blackknight";
        vector<pair<int,int>>v=wheredoesblackkingexist(board);
        if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
            return true;
        }
    }
    if(j+2<=7&&i+1<=7&&(iswhite(board[i+1][j+2])||board[i+1][j+2]=="E")){
        vector<vector<string>>boardtemp=board;
        boardtemp[i][j]="E";
        boardtemp[i+1][j+2]="blackknight";
        vector<pair<int,int>>v=wheredoesblackkingexist(board);
        if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
            return true;
        }
    }
    if(j-2>=0&&i-1>=0&&(iswhite(board[i-1][j-2])||board[i-1][j-2]=="E")){
        vector<vector<string>>boardtemp=board;
        boardtemp[i][j]="E";
        boardtemp[i-1][j-2]="blackknight";
        vector<pair<int,int>>v=wheredoesblackkingexist(board);
        if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
            return true;
        }
    }
    if(j-2>=0&&i+1<=7&&(iswhite(board[i+1][j-2])||board[i+1][j-2]=="E")){
        vector<vector<string>>boardtemp=board;
        boardtemp[i][j]="E";
        boardtemp[i+1][j-2]="blackknight";
        vector<pair<int,int>>v=wheredoesblackkingexist(board);
        if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
            return true;
        }
    }
    if(i+2<=7&&j+1<=7&&(iswhite(board[i+2][j+1])||board[i+2][j+1]=="E")){
        vector<vector<string>>boardtemp=board;
        boardtemp[i][j]="E";
        boardtemp[i+2][j+1]="blackknight";
        vector<pair<int,int>>v=wheredoesblackkingexist(board);
        if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
            return true;
        }
    }
    if(i+2<=7&&j-1>=0&&(iswhite(board[i+2][j-1])||board[i+2][j-1]=="E")){
        vector<vector<string>>boardtemp=board;
        boardtemp[i][j]="E";
        boardtemp[i+2][j-1]="blackknight";
        vector<pair<int,int>>v=wheredoesblackkingexist(board);
        if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
            return true;
        }
    }
    if(i-2>=0&&j+1<=7&&(iswhite(board[i-2][j+1])||board[i-2][j+1]=="E")){
        vector<vector<string>>boardtemp=board;
        boardtemp[i][j]="E";
        boardtemp[i-2][j+1]="blackknight";
        vector<pair<int,int>>v=wheredoesblackkingexist(board);
        if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
            return true;
        }
    }
    if(i-2>=0&&j-1>=0&&(iswhite(board[i-2][j-1])||board[i-2][j-1]=="E")){
        vector<vector<string>>boardtemp=board;
        boardtemp[i][j]="E";
        boardtemp[i-2][j-1]="blackknight";
        vector<pair<int,int>>v=wheredoesblackkingexist(board);
        if(!ischeckbywhite(v[0].first,v[0].second,boardtemp)){
            return true;
        }
    }
    return false;
}
int ismovablebishopblack(int i,int j,vector<vector<string>>&board){
    vector<vector<string>>boardtemp=board;
    vector<pair<int,int>>v1=wheredoesblackbishopexist(board);
    vector<pair<int,int>>v2=wheredoesblackkingexist(board);
    boardtemp[v1[0].first][v1[0].second]="E";
    if(ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
        return false;
    }
    vector<string>v;
    for(int k=1;k<8;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    int l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    return false;
}
int ismovablerookblack(int i,int j,vector<vector<string>>&board){
    vector<vector<string>>boardtemp=board;
    vector<pair<int,int>>v1=wheredoesblackrookexist(board);
    vector<pair<int,int>>v2=wheredoesblackkingexist(board);
    boardtemp[v1[0].first][v1[0].second]="E";
    if(ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
        return false;
    }
    vector<string>v;
    for(int k=1;k<8;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    int l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    return false;
}
int ismovablequeenblack(int i,int j,vector<vector<string>>&board){
    vector<vector<string>>boardtemp=board;
    vector<pair<int,int>>v1=wheredoesblackqueenexist(board);
    vector<pair<int,int>>v2=wheredoesblackkingexist(board);
    boardtemp[v1[0].first][v1[0].second]="E";
    if(ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
        return false;
    }
    if(ismovablebishopblack(i,j,board)||ismovablerookblack(i,j,board)){
        return true;
    }
    return false;
}
int ismovablekingblack(int i,int j,vector<vector<string>>&board){
    if(j+1<=7){
        if((board[i][j+1]=="E"||iswhite(board[i][j+1]))&&!isattackedbywhite(i,j+1,board)){
            return true;
        }
    }
    if(j-1>=0){
        if((board[i][j-1]=="E"||iswhite(board[i][j-1]))&&!isattackedbywhite(i,j-1,board)){
            return true;
        }
    }
    if(i-1>=0&&j-1>=0){
        if((board[i-1][j-1]=="E"||iswhite(board[i-1][j-1]))&&!isattackedbywhite(i-1,j-1,board)){
            return true;
        }
    }
    if(i-1>=0&&j+1<=7){
        if((board[i-1][j+1]=="E"||iswhite(board[i-1][j+1]))&&!isattackedbywhite(i-1,j+1,board)){
            return true;
        }
    }
    if(i+1<=7&&j-1>=0){
        if((board[i+1][j-1]=="E"||iswhite(board[i+1][j-1]))&&!isattackedbywhite(i+1,j-1,board)){
            return true;
        }
    }
    if(i+1<=7&&j+1<=7){
        if((board[i+1][j+1]=="E"||iswhite(board[i+1][j+1]))&&!isattackedbywhite(i+1,j+1,board)){
            return true;
        }
    }
    if(i+1<=7){
        if((board[i+1][j]=="E"||iswhite(board[i+1][j]))&&!isattackedbywhite(i+1,j,board)){
            return true;
        }
    }
    if(i-1>=0){
        if((board[i-1][j]=="E"||iswhite(board[i-1][j]))&&!isattackedbywhite(i-1,j,board)){
            return true;
        }
    }
    return false;
}
int ismovablepawnwhite(int i,int j,vector<vector<string>>&board){
    if(i+1<=7){
        if(board[i+1][j]=="E"){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="E";
            boardtemp[i+1][j]="whitepawn";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j-1>=0){
        if(isblack(board[i+1][j-1])){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="E";
            boardtemp[i+1][j-1]="whitepawn";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    if(i+1<=7&&j+1<=7){
        if(isblack(board[i+1][j+1])){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="E";
            boardtemp[i+1][j+1]="whitepawn";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
        }
    }
    return false;
}
int ismovableknightwhite(int i,int j,vector<vector<string>>&board){
    if(j+2<=7&&i-1>=0&&(isblack(board[i-1][j+2])||board[i-1][j+2]=="E")){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="E";
            boardtemp[i-1][j+2]="whiteknight";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
    }
    if(j+2<=7&&i+1<=7&&(isblack(board[i+1][j+2])||board[i+1][j+2]=="E")){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="E";
            boardtemp[i+1][j+2]="whiteknight";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
    }
    if(j-2>=0&&i-1>=0&&(isblack(board[i-1][j-2])||board[i-1][j-2]=="E")){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="E";
            boardtemp[i-1][j-2]="whiteknight";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
    }
    if(j-2>=0&&i+1<=7&&(isblack(board[i+1][j-2])||board[i+1][j-2]=="E")){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="E";
            boardtemp[i+1][j-2]="whiteknight";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
    }
    if(i+2<=7&&j+1<=7&&(isblack(board[i+2][j+1])||board[i+2][j+1]=="E")){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="E";
            boardtemp[i+2][j+1]="whiteknight";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
    }
    if(i+2<=7&&j-1>=0&&(isblack(board[i+2][j-1])||board[i+2][j-1]=="E")){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="E";
            boardtemp[i+2][j-1]="whiteknight";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
    }
    if(i-2>=0&&j+1<=7&&(isblack(board[i-2][j+1])||board[i-2][j+1]=="E")){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="E";
            boardtemp[i-2][j+1]="whiteknight";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
    }
    if(i-2>=0&&j-1>=0&&(isblack(board[i-2][j-1])||board[i-2][j-1]=="E")){
            vector<vector<string>>boardtemp=board;
            boardtemp[i][j]="E";
            boardtemp[i-2][j-1]="whiteknight";
            vector<pair<int,int>>v=wheredoeswhitekingexist(board);
            if(!ischeckbyblack(v[0].first,v[0].second,boardtemp)){
                return true;
            }
    }
    return false;
}
int ismovablebishopwhite(int i,int j,vector<vector<string>>&board){
    vector<vector<string>>boardtemp=board;
    vector<pair<int,int>>v1=wheredoeswhitebishopexist(board);
    vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
    boardtemp[v1[0].first][v1[0].second]="E";
    if(ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
        return false;
    }
    vector<string>v;
    for(int k=1;k<8;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    int l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    return false;
}
int ismovablerookwhite(int i,int j,vector<vector<string>>&board){vector<vector<string>>boardtemp=board;
    vector<pair<int,int>>v1=wheredoeswhiterookexist(board);
    vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
    boardtemp[v1[0].first][v1[0].second]="E";
    if(ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
        return false;
    }
    vector<string>v;
    for(int k=1;k<8;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    int l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    return false;
}
int ismovablequeenwhite(int i,int j,vector<vector<string>>&board){
    vector<vector<string>>boardtemp=board;
    vector<pair<int,int>>v1=wheredoeswhitequeenexist(board);
    vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
    boardtemp[v1[0].first][v1[0].second]="E";
    if(ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
        return false;
    }
    if(ismovablebishopwhite(i,j,board)||ismovablerookwhite(i,j,board)){
        return true;
    }
    return false;
}
int ismovablebishopwhite_(int i,int j,vector<vector<string>>&board){
    vector<string>v;
    for(int k=1;k<8;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    int l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    return false;
}
int ismovablerookwhite_(int i,int j,vector<vector<string>>&board){vector<vector<string>>boardtemp=board;
    vector<string>v;
    for(int k=1;k<8;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    int l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(isblack(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    return false;
}
int ismovablequeenwhite_(int i,int j,vector<vector<string>>&board){
    if(ismovablebishopwhite_(i,j,board)||ismovablerookwhite_(i,j,board)){
        return true;
    }
    return false;
}
int ismovablekingwhite(int i,int j,vector<vector<string>>&board){
    if(j+1<=7){
        if((board[i][j+1]=="E"||isblack(board[i][j+1]))&&!isattackedbyblack(i,j+1,board)){
            return true;
        }
    }
    if(j-1>=0){
        if((board[i][j-1]=="E"||isblack(board[i][j-1]))&&!isattackedbyblack(i,j-1,board)){
            return true;
        }
    }
    if(i-1>=0&&j-1>=0){
        if((board[i-1][j-1]=="E"||isblack(board[i-1][j-1]))&&!isattackedbyblack(i-1,j-1,board)){
            return true;
        }
    }
    if(i-1>=0&&j+1<=7){
        if((board[i-1][j+1]=="E"||isblack(board[i-1][j+1]))&&!isattackedbyblack(i-1,j+1,board)){
            return true;
        }
    }
    if(i+1<=7&&j-1>=0){
        if((board[i+1][j-1]=="E"||isblack(board[i+1][j-1]))&&!isattackedbyblack(i+1,j-1,board)){
            return true;
        }
    }
    if(i+1<=7&&j+1<=7){
        if((board[i+1][j+1]=="E"||isblack(board[i+1][j+1]))&&!isattackedbyblack(i+1,j+1,board)){
            return true;
        }
    }
    if(i+1<=7){
        if((board[i+1][j]=="E"||isblack(board[i+1][j]))&&!isattackedbyblack(i+1,j,board)){
            return true;
        }
    }
    if(i-1>=0){
        if((board[i-1][j]=="E"||isblack(board[i-1][j]))&&!isattackedbyblack(i-1,j,board)){
            return true;
        }
    }
    return false;
}
int iscapturablebywhiteking(int i,int j,vector<vector<string>>&board){
if(i+1<=7){
        if(board[i+1][j].substr(0,9)=="whiteking"&&!isattackedbyblack(i+1,j,board)){
            return true;
        }
    }
    if(i-1>=0){
        if(board[i-1][j].substr(0,9)=="whiteking"&&!isattackedbyblack(i-1,j,board)){
            return true;
        }
    }
    if(j+1<=7){
        if(board[i][j+1].substr(0,9)=="whiteking"&&!isattackedbyblack(i,j+1,board)){
            return true;
        }
    }
    if(j-1>=0){
        if(board[i][j-1].substr(0,9)=="whiteking"&&!isattackedbyblack(i,j-1,board)){
            return true;
        }
    }
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1].substr(0,9)=="whiteking"&&!isattackedbyblack(i+1,j+1,board)){
            return true;
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1].substr(0,9)=="whiteking"&&!isattackedbyblack(i+1,j-1,board)){
            return true;
        }
    }
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1].substr(0,9)=="whiteking"&&!isattackedbyblack(i-1,j+1,board)){
            return true;
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1].substr(0,9)=="whiteking"&&!isattackedbyblack(i-1,j-1,board)){
            return true;
        }
    }
    return false;
}
int ismovablebishopblack_(int i,int j,vector<vector<string>>&board){
    vector<string>v;
    for(int k=1;k<8;k++){
        if(i-k>=0&&j-k>=0){
            v.push_back(board[i-k][j-k]);
        }
    }
    int l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i+k<=7&&j-k>=0){
            v.push_back(board[i+k][j-k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i-k>=0&&j+k<=7){
            v.push_back(board[i-k][j+k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i+k<=7&&j+k<=7){
            v.push_back(board[i+k][j+k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    return false;
}
int ismovablerookblack_(int i,int j,vector<vector<string>>&board){
    vector<string>v;
    for(int k=1;k<8;k++){
        if(j+k<=7){
            v.push_back(board[i][j+k]);
        }
    }
    int l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(j-k>=0){
            v.push_back(board[i][j-k]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i-k>=0){
            v.push_back(board[i-k][j]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    v.clear();
    for(int k=1;k<8;k++){
        if(i+k<=7){
            v.push_back(board[i+k][j]);
        }
    }
    l=0;
    for(int k=0;k<v.size();k++){
        if(v[k]=="E"){
            l++;
        }
        else{
            if(iswhite(v[k])){
                l++;
            }
            break;
        }
    }
    if(l>0){
        return true;
    }
    return false;
}
int ismovablequeenblack_(int i,int j,vector<vector<string>>&board){
    if(ismovablebishopblack_(i,j,board)||ismovablerookblack_(i,j,board)){
        return true;
    }
    return false;
}
int cancheckbeblockedbywhite(vector<vector<string>>&board){
        if(doeswhitepawn1exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn1exist(board);
            vector<pair<int,int>>vb=wherewhitepawn1cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn1";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doeswhitepawn2exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn2exist(board);
            vector<pair<int,int>>vb=wherewhitepawn2cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn2";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doeswhitepawn3exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn3exist(board);
            vector<pair<int,int>>vb=wherewhitepawn3cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn3";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doeswhitepawn4exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn4exist(board);
            vector<pair<int,int>>vb=wherewhitepawn4cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn4";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doeswhitepawn5exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn5exist(board);
            vector<pair<int,int>>vb=wherewhitepawn5cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn5";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doeswhitepawn6exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn6exist(board);
            vector<pair<int,int>>vb=wherewhitepawn6cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn6";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doeswhitepawn7exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn7exist(board);
            vector<pair<int,int>>vb=wherewhitepawn7cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn7";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doeswhitepawn8exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn8exist(board);
            vector<pair<int,int>>vb=wherewhitepawn8cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn8";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doeswhiteknight1exist(board)){
            vector<pair<int,int>>va=wheredoeswhiteknight1exist(board);
            vector<pair<int,int>>vb=wherewhiteknight1cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whiteknight1";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doeswhiteknight2exist(board)){
            vector<pair<int,int>>va=wheredoeswhiteknight2exist(board);
            vector<pair<int,int>>vb=wherewhiteknight2cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whiteknight2";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doeswhitebishop1exist(board)){
            vector<pair<int,int>>va=wheredoeswhitebishop1exist(board);
            vector<pair<int,int>>vb=wherewhitebishop1cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitebishop1";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doeswhitebishop2exist(board)){
            vector<pair<int,int>>va=wheredoeswhitebishop2exist(board);
            vector<pair<int,int>>vb=wherewhitebishop2cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitebishop2";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doeswhiterook1exist(board)){
            vector<pair<int,int>>va=wheredoeswhiterook1exist(board);
            vector<pair<int,int>>vb=wherewhiterook1cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whiterook1";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doeswhiterook2exist(board)){
            vector<pair<int,int>>va=wheredoeswhiterook2exist(board);
            vector<pair<int,int>>vb=wherewhiterook2cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whiterook2";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doeswhitequeenexist(board)){
            vector<pair<int,int>>va=wheredoeswhitequeenexist(board);
            vector<pair<int,int>>vb=wherewhitequeencango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitequeen";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
    return false;
}
int cancheckbeblockedbyblack(vector<vector<string>>&board){
        if(doesblackpawn1exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn1exist(board);
            vector<pair<int,int>>vb=whereblackpawn1cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn1";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doesblackpawn2exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn2exist(board);
            vector<pair<int,int>>vb=whereblackpawn2cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn2";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doesblackpawn3exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn3exist(board);
            vector<pair<int,int>>vb=whereblackpawn3cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn3";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doesblackpawn4exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn4exist(board);
            vector<pair<int,int>>vb=whereblackpawn4cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn4";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doesblackpawn5exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn5exist(board);
            vector<pair<int,int>>vb=whereblackpawn5cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn5";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doesblackpawn6exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn6exist(board);
            vector<pair<int,int>>vb=whereblackpawn6cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn6";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doesblackpawn7exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn7exist(board);
            vector<pair<int,int>>vb=whereblackpawn7cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn7";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doesblackpawn8exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn8exist(board);
            vector<pair<int,int>>vb=whereblackpawn8cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn8";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doesblackknight1exist(board)){
            vector<pair<int,int>>va=wheredoesblackknight1exist(board);
            vector<pair<int,int>>vb=whereblackknight1cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackknight1";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doesblackknight2exist(board)){
            vector<pair<int,int>>va=wheredoesblackknight2exist(board);
            vector<pair<int,int>>vb=whereblackknight2cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackknight2";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doesblackbishop1exist(board)){
            vector<pair<int,int>>va=wheredoesblackbishop1exist(board);
            vector<pair<int,int>>vb=whereblackbishop1cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackbishop1";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doesblackbishop2exist(board)){
            vector<pair<int,int>>va=wheredoesblackbishop2exist(board);
            vector<pair<int,int>>vb=whereblackbishop2cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackbishop2";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doesblackrook1exist(board)){
            vector<pair<int,int>>va=wheredoesblackrook1exist(board);
            vector<pair<int,int>>vb=whereblackrook1cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackrook1";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doesblackrook2exist(board)){
            vector<pair<int,int>>va=wheredoesblackrook2exist(board);
            vector<pair<int,int>>vb=whereblackrook2cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackrook2";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
        if(doesblackqueenexist(board)){
            vector<pair<int,int>>va=wheredoesblackqueenexist(board);
            vector<pair<int,int>>vb=whereblackqueencango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackqueen";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    return true;
                }
            }
        }
    return false;
}
int noofattacksbywhite(int i,int j,vector<vector<string>>&board){
    int k=0;
    vector<int>v1=isattackfromblackpawn(i,j,board);
    vector<int>v2=isattackfromblackknight(i,j,board);
    vector<int>v3=isattackfromblackrook(i,j,board);
    vector<int>v4=isattackfromblackbishop(i,j,board);
    vector<int>v5=isattackfromblackqueen(i,j,board);
    vector<int>v6=isattackfromblackking(i,j,board);
    if(v1.size()){
        k++;
    }
    if(v2.size()){
        k++;
    }
    if(v3.size()){
        k++;
    }
    if(v4.size()){
        k++;
    }
    if(v5.size()){
        k++;
    }
    if(v6.size()){
        k++;
    }
    return k;
}
int noofattacksbyblack(int i,int j,vector<vector<string>>&board){
    int k=0;
    vector<int>v1=isattackfromwhitepawn(i,j,board);
    vector<int>v2=isattackfromwhiteknight(i,j,board);
    vector<int>v3=isattackfromwhiterook(i,j,board);
    vector<int>v4=isattackfromwhitebishop(i,j,board);
    vector<int>v5=isattackfromwhitequeen(i,j,board);
    vector<int>v6=isattackfromwhiteking(i,j,board);
    if(v1.size()){
        k++;
    }
    if(v2.size()){
        k++;
    }
    if(v3.size()){
        k++;
    }
    if(v4.size()){
        k++;
    }
    if(v5.size()){
        k++;
    }
    if(v6.size()){
        k++;
    }
    return k;
}
vector<int> isattackfromwhiteking(int i,int j,vector<vector<string>>&board){
    vector<int>v;
    if(i+1<=7){
        if(board[i+1][j]!="E"&&board[i+1][j].substr(0,9)=="whiteking"){
            v.push_back(i+1);
            v.push_back(j);
            return v;
        }
    }
    if(i-1>=0){
        if(board[i-1][j]!="E"&&board[i-1][j].substr(0,9)=="whiteking"){
            v.push_back(i-1);
            v.push_back(j);
            return v;
        }
    }
    if(j+1<=7){
        if(board[i][j+1]!="E"&&board[i][j+1].substr(0,9)=="whiteking"){
            v.push_back(i);
            v.push_back(j+1);
            return v;
        }
    }
    if(j-1>=0){
        if(board[i][j-1]!="E"&&board[i][j-1].substr(0,9)=="whiteking"){
            v.push_back(i);
            v.push_back(j-1);
            return v;
        }
    }
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1]!="E"&&board[i+1][j+1].substr(0,9)=="whiteking"){
            v.push_back(i+1);
            v.push_back(j+1);
            return v;
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1]!="E"&&board[i+1][j-1].substr(0,9)=="whiteking"){
            v.push_back(i+1);
            v.push_back(j-1);
            return v;
        }
    }
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1]!="E"&&board[i-1][j+1].substr(0,9)=="whiteking"){
            v.push_back(i-1);
            v.push_back(j+1);
            return v;
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1]!="E"&&board[i-1][j-1].substr(0,9)=="whiteking"){
            v.push_back(i-1);
            v.push_back(j-1);
            return v;
        }
    }
    return v;
}
int ischeckmatedbywhite(int i,int j,vector<vector<string>>&board){
    if(ischeckbywhite(i,j,board)){
        if(ismovablekingblack(i,j,board)){
            return false;
        }
        else{
            if(noofattacksbywhite(i,j,board)>=2){
                return true;
            }
            else{
                if(cancheckbeblockedbyblack(board)){
                    return false;
                }
                vector<int>v=isattackfromwhitepawn(i,j,board);
                if(v.size()){
                    if(iscapturablebyblackpawn(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackknight(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackrook(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackbishop(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackqueen(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackking(v[0],v[1],board)){
                        return false;
                    }
                }
                v.clear();
                v=isattackfromwhiteknight(i,j,board);
                if(v.size()){
                    if(iscapturablebyblackpawn(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackknight(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackrook(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackbishop(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackqueen(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackking(v[0],v[1],board)){
                        return false;
                    }
                }
                v.clear();
                v=isattackfromwhitebishop(i,j,board);
                if(v.size()){
                    if(iscapturablebyblackpawn(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackknight(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackrook(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackbishop(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackqueen(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackking(v[0],v[1],board)){
                        return false;
                    }
                }
                v.clear();
                v=isattackfromwhiterook(i,j,board);
                if(v.size()){
                    if(iscapturablebyblackpawn(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackknight(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackrook(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackbishop(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackqueen(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackking(v[0],v[1],board)){
                        return false;
                    }
                }
                v.clear();
                v=isattackfromwhitequeen(i,j,board);
                if(v.size()){
                    if(iscapturablebyblackpawn(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackknight(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackrook(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackbishop(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackqueen(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackking(v[0],v[1],board)){
                        return false;
                    }
                }
                v.clear();
                v=isattackfromwhiteking(i,j,board);
                if(v.size()){
                    if(iscapturablebyblackpawn(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackknight(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackrook(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackbishop(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackqueen(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebyblackking(v[0],v[1],board)){
                        return false;
                    }
                }
                return true;
            }
        }
    }
    return false;
}
vector<int> isattackfromblackking(int i,int j,vector<vector<string>>&board){
    vector<int>v;
    if(i+1<=7){
        if(board[i+1][j]!="E"&&board[i+1][j].substr(0,9)=="whiteking"){
            v.push_back(i+1);
            v.push_back(j);
            return v;
        }
    }
    if(i-1>=0){
        if(board[i-1][j]!="E"&&board[i-1][j].substr(0,9)=="whiteking"){
            v.push_back(i-1);
            v.push_back(j);
            return v;
        }
    }
    if(j+1<=7){
        if(board[i][j+1]!="E"&&board[i][j+1].substr(0,9)=="whiteking"){
            v.push_back(i);
            v.push_back(j+1);
            return v;
        }
    }
    if(j-1>=0){
        if(board[i][j-1]!="E"&&board[i][j-1].substr(0,9)=="whiteking"){
            v.push_back(i);
            v.push_back(j-1);
            return v;
        }
    }
    if(i+1<=7&&j+1<=7){
        if(board[i+1][j+1]!="E"&&board[i+1][j+1].substr(0,9)=="whiteking"){
            v.push_back(i+1);
            v.push_back(j+1);
            return v;
        }
    }
    if(i+1<=7&&j-1>=0){
        if(board[i+1][j-1]!="E"&&board[i+1][j-1].substr(0,9)=="whiteking"){
            v.push_back(i+1);
            v.push_back(j-1);
            return v;
        }
    }
    if(i-1>=0&&j+1<=7){
        if(board[i-1][j+1]!="E"&&board[i-1][j+1].substr(0,9)=="whiteking"){
            v.push_back(i-1);
            v.push_back(j+1);
            return v;
        }
    }
    if(i-1>=0&&j-1>=0){
        if(board[i-1][j-1]!="E"&&board[i-1][j-1].substr(0,9)=="whiteking"){
            v.push_back(i-1);
            v.push_back(j-1);
            return v;
        }
    }
    return v;
}
int ischeckmatedbyblack(int i,int j,vector<vector<string>>&board){
    if(ischeckbyblack(i,j,board)){
        if(ismovablekingwhite(i,j,board)){
            return false;
        }
        else{
            if(noofattacksbyblack(i,j,board)>=2){
                return true;
            }
            else{
                if(cancheckbeblockedbywhite(board)){
                    return false;
                }
                vector<int>v=isattackfromblackpawn(i,j,board);
                if(v.size()){
                    if(iscapturablebywhitepawn(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiteknight(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiterook(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhitebishop(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhitequeen(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiteking(v[0],v[1],board)){
                        return false;
                    }
                }
                v.clear();
                v=isattackfromblackknight(i,j,board);
                if(v.size()){
                    if(iscapturablebywhitepawn(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiteknight(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiterook(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhitebishop(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhitequeen(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiteking(v[0],v[1],board)){
                        return false;
                    }
                }
                v.clear();
                v=isattackfromblackbishop(i,j,board);
                if(v.size()){
                    if(iscapturablebywhitepawn(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiteknight(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiterook(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhitebishop(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhitequeen(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiteking(v[0],v[1],board)){
                        return false;
                    }
                }
                v.clear();
                v=isattackfromblackrook(i,j,board);
                if(v.size()){
                    if(iscapturablebywhitepawn(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiteknight(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiterook(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhitebishop(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhitequeen(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiteking(v[0],v[1],board)){
                        return false;
                    }
                }
                v.clear();
                v=isattackfromblackqueen(i,j,board);
                if(v.size()){
                    if(iscapturablebywhitepawn(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiteknight(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiterook(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhitebishop(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhitequeen(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiteking(v[0],v[1],board)){
                        return false;
                    }
                }
                v.clear();
                v=isattackfromblackking(i,j,board);
                if(v.size()){
                    if(iscapturablebywhitepawn(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiteknight(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiterook(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhitebishop(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhitequeen(v[0],v[1],board)){
                        return false;
                    }
                    if(iscapturablebywhiteking(v[0],v[1],board)){
                        return false;
                    }
                }
                return true;
            }
        }
    }
    return false;
}
int doesblackpawn1exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn1"){
                return true;
            }
        }
    }
    return false;
}
int doesblackpawn2exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn2"){
                return true;
            }
        }
    }
    return false;
}
int doesblackpawn3exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn3"){
                return true;
            }
        }
    }
    return false;
}
int doesblackpawn4exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn4"){
                return true;
            }
        }
    }
    return false;
}
int doesblackpawn5exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn5"){
                return true;
            }
        }
    }
    return false;
}
int doesblackpawn6exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn6"){
                return true;
            }
        }
    }
    return false;
}
int doesblackpawn7exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn7"){
                return true;
            }
        }
    }
    return false;
}
int doesblackpawn8exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn8"){
                return true;
            }
        }
    }
    return false;
}
int doesblackknight1exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="blackknight1"){
                return true;
            }
        }
    }
    return false;
}
int doesblackknight2exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="blackknight2"){
                return true;
            }
        }
    }
    return false;
}
int doesblackrook1exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackrook1"){
                return true;
            }
        }
    }
    return false;
}
int doesblackrook2exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackrook2"){
                return true;
            }
        }
    }
    return false;
}
int doesblackbishop1exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="blackbishop1"){
                return true;
            }
        }
    }
    return false;
}
int doesblackbishop2exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="blackbishop2"){
                return true;
            }
        }
    }
    return false;
}
int doesblackqueenexist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackqueen"){
                return true;
            }
        }
    }
    return false;
}
int doeswhitepawn1exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn1"){
                return true;
            }
        }
    }
    return false;
}
int doeswhitepawn2exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn2"){
                return true;
            }
        }
    }
    return false;
}
int doeswhitepawn3exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn3"){
                return true;
            }
        }
    }
    return false;
}
int doeswhitepawn4exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn4"){
                return true;
            }
        }
    }
    return false;
}
int doeswhitepawn5exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn5"){
                return true;
            }
        }
    }
    return false;
}
int doeswhitepawn6exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn6"){
                return true;
            }
        }
    }
    return false;
}
int doeswhitepawn7exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn7"){
                return true;
            }
        }
    }
    return false;
}
int doeswhitepawn8exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn8"){
                return true;
            }
        }
    }
    return false;
}
int doeswhiteknight1exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="whiteknight1"){
                return true;
            }
        }
    }
    return false;
}
int doeswhiteknight2exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="whiteknight2"){
                return true;
            }
        }
    }
    return false;
}
int doeswhiterook1exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whiterook1"){
                return true;
            }
        }
    }
    return false;
}
int doeswhiterook2exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whiterook2"){
                return true;
            }
        }
    }
    return false;
}
int doeswhitebishop1exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="whitebishop1"){
                return true;
            }
        }
    }
    return false;
}
int doeswhitebishop2exist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="whitebishop2"){
                return true;
            }
        }
    }
    return false;
}
int doeswhitequeenexist(vector<vector<string>>&board){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitequeen"){
                return true;
            }
        }
    }
    return false;
}
vector<pair<int,int>> wheredoesblackpawnexist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,9)=="blackpawn"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackknightexist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,11)=="blackknight"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackrookexist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,9)=="blackrook"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackbishopexist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,11)=="blackbishop"){
                v.push_back({i,j});
           }
    }
}
return v;
}
vector<pair<int,int>> wheredoeswhitepawnexist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,9)=="whitepawn"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhiteknightexist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,11)=="whiteknight"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhiterookexist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,9)=="whiterook"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhitebishopexist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,11)=="whitebishop"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackpawn1exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn1"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackpawn2exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn2"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackpawn3exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn3"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackpawn4exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn4"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackpawn5exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn5"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackpawn6exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn6"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackpawn7exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn7"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackpawn8exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackpawn8"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackknight1exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="blackknight1"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackknight2exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="blackknight2"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackrook1exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackrook1"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackrook2exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackrook2"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackbishop1exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="blackbishop1"){
                v.push_back({i,j});
           }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackbishop2exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="blackbishop2"){
                v.push_back({i,j});
           }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackqueenexist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="blackqueen"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoesblackkingexist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,9)=="blackking"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhitepawn1exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn1"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhitepawn2exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn2"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhitepawn3exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn3"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhitepawn4exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn4"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhitepawn5exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn5"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhitepawn6exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn6"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhitepawn7exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn7"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhitepawn8exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitepawn8"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhiteknight1exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="whiteknight1"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhiteknight2exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="whiteknight2"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhiterook1exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whiterook1"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhiterook2exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whiterook2"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhitebishop1exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="whitebishop1"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhitebishop2exist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,12)=="whitebishop2"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhitequeenexist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,10)=="whitequeen"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> wheredoeswhitekingexist(vector<vector<string>>&board){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j].substr(0,9)=="whiteking"){
                v.push_back({i,j});
            }
        }
    }
    return v;
}
vector<pair<int,int>> whereblackpawn1cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackpawn1exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnblack(i,j,board)){
            if(i-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="E";
                boardtemp[i-1][j]="blackpawn1";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(board[i-1][j]=="E"&&!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                    ans.push_back({i-1,j});
                }
            }
            if(i==6&&board[4][j]=="E"){
                if(board[i-1][j]=="E"&&board[i-2][j]=="E"){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-2][j]="blackpawn1";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-2,j});
                    }
                }
            }
            if(i-1>=0&&j-1>=0){
                if(iswhite(board[i-1][j-1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j-1]="blackpawn1";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j-1});
                    }
                }
            }
            if(i-1>=0&&j+1<=7){
                if(iswhite(board[i-1][j+1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j+1]="blackpawn1";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j+1});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackpawn2cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackpawn2exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnblack(i,j,board)){
            if(i-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="E";
                boardtemp[i-1][j]="blackpawn2";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(board[i-1][j]=="E"&&!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                    ans.push_back({i-1,j});
                }
            }
            if(i==6&&board[4][j]=="E"){
                if(board[i-1][j]=="E"&&board[i-2][j]=="E"){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-2][j]="blackpawn2";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-2,j});
                    }
                }
            }
            if(i-1>=0&&j-1>=0){
                if(iswhite(board[i-1][j-1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j-1]="blackpawn2";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j-1});
                    }
                }
            }
            if(i-1>=0&&j+1<=7){
                if(iswhite(board[i-1][j+1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j+1]="blackpawn2";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j+1});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackpawn3cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackpawn3exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnblack(i,j,board)){
            if(i-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="E";
                boardtemp[i-1][j]="blackpawn3";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(board[i-1][j]=="E"&&!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                    ans.push_back({i-1,j});
                }
            }
            if(i==6&&board[4][j]=="E"){
                if(board[i-1][j]=="E"&&board[i-2][j]=="E"){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-2][j]="blackpawn3";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-2,j});
                    }
                }
            }
            if(i-1>=0&&j-1>=0){
                if(iswhite(board[i-1][j-1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j-1]="blackpawn3";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j-1});
                    }
                }
            }
            if(i-1>=0&&j+1<=7){
                if(iswhite(board[i-1][j+1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j+1]="blackpawn3";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j+1});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackpawn4cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackpawn4exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnblack(i,j,board)){
            if(i-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="E";
                boardtemp[i-1][j]="blackpawn4";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(board[i-1][j]=="E"&&!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                    ans.push_back({i-1,j});
                }
            }
            if(i==6&&board[4][j]=="E"){
                if(board[i-1][j]=="E"&&board[i-2][j]=="E"){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-2][j]="blackpawn4";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-2,j});
                    }
                }
            }
            if(i-1>=0&&j-1>=0){
                if(iswhite(board[i-1][j-1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j-1]="blackpawn4";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j-1});
                    }
                }
            }
            if(i-1>=0&&j+1<=7){
                if(iswhite(board[i-1][j+1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j+1]="blackpawn4";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j+1});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackpawn5cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackpawn5exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnblack(i,j,board)){
            if(i-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="E";
                boardtemp[i-1][j]="blackpawn5";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(board[i-1][j]=="E"&&!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                    ans.push_back({i-1,j});
                }
            }
            if(i==6&&board[4][j]=="E"){
                if(board[i-1][j]=="E"&&board[i-2][j]=="E"){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-2][j]="blackpawn5";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-2,j});
                    }
                }
            }
            if(i-1>=0&&j-1>=0){
                if(iswhite(board[i-1][j-1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j-1]="blackpawn5";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j-1});
                    }
                }
            }
            if(i-1>=0&&j+1<=7){
                if(iswhite(board[i-1][j+1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j+1]="blackpawn5";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j+1});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackpawn6cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackpawn6exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnblack(i,j,board)){
            if(i-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="E";
                boardtemp[i-1][j]="blackpawn6";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(board[i-1][j]=="E"&&!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                    ans.push_back({i-1,j});
                }
            }
            if(i==6&&board[4][j]=="E"){
                if(board[i-1][j]=="E"&&board[i-2][j]=="E"){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-2][j]="blackpawn6";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-2,j});
                    }
                }
            }
            if(i-1>=0&&j-1>=0){
                if(iswhite(board[i-1][j-1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j-1]="blackpawn6";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j-1});
                    }
                }
            }
            if(i-1>=0&&j+1<=7){
                if(iswhite(board[i-1][j+1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j+1]="blackpawn6";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j+1});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackpawn7cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackpawn7exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnblack(i,j,board)){
            if(i-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="E";
                boardtemp[i-1][j]="blackpawn7";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(board[i-1][j]=="E"&&!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                    ans.push_back({i-1,j});
                }
            }
            if(i==6&&board[4][j]=="E"){
                if(board[i-1][j]=="E"&&board[i-2][j]=="E"){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-2][j]="blackpawn7";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-2,j});
                    }
                }
            }
            if(i-1>=0&&j-1>=0){
                if(iswhite(board[i-1][j-1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j-1]="blackpawn7";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j-1});
                    }
                }
            }
            if(i-1>=0&&j+1<=7){
                if(iswhite(board[i-1][j+1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j+1]="blackpawn7";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j+1});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackpawn8cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackpawn8exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnblack(i,j,board)){
            if(i-1>=0){
                vector<vector<string>>boardtemp=board;
                boardtemp[i][j]="E";
                boardtemp[i-1][j]="blackpawn8";
                vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                if(board[i-1][j]=="E"&&!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                    ans.push_back({i-1,j});
                }
            }
            if(i==6&&board[4][j]=="E"){
                if(board[i-1][j]=="E"&&board[i-2][j]=="E"){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-2][j]="blackpawn8";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-2,j});
                    }
                }
            }
            if(i-1>=0&&j-1>=0){
                if(iswhite(board[i-1][j-1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j-1]="blackpawn8";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j-1});
                    }
                }
            }
            if(i-1>=0&&j+1<=7){
                if(iswhite(board[i-1][j+1])){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j+1]="blackpawn8";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j+1});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackknight1cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackknight1exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovableknightblack(i,j,board)){
            if(j+2<=7&&i-1>=0&&(iswhite(board[i-1][j+2])||board[i-1][j+2]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j+2]="blackknight1";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j+2});
                    }
            }
            if(j+2<=7&&i+1<=7&&(iswhite(board[i+1][j+2])||board[i+1][j+2]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i+1][j+2]="blackknight1";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i+1,j+2});
                    }
            }
            if(j-2>=0&&i-1>=0&&(iswhite(board[i-1][j-2])||board[i-1][j-2]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j-2]="blackknight1";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j-2});
                    }
            }
            if(j-2>=0&&i+1<=7&&(iswhite(board[i+1][j-2])||board[i+1][j-2]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i+1][j-2]="blackknight1";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i+1,j-2});
                    }
            }
            if(i+2<=7&&j+1<=7&&(iswhite(board[i+2][j+1])||board[i+2][j+1]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i+2][j+1]="blackknight1";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i+2,j+1});
                    }
            }
            if(i+2<=7&&j-1>=0&&(iswhite(board[i+2][j-1])||board[i+2][j-1]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i+2][j-1]="blackknight1";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i+2,j-1});
                    }
            }
            if(i-2>=0&&j+1<=7&&(iswhite(board[i-2][j+1])||board[i-2][j+1]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-2][j+1]="blackknight1";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-2,j+1});
                    }
            }
            if(i-2>=0&&j-1>=0&&(iswhite(board[i-2][j-1])||board[i-2][j-1]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-2][j-1]="blackknight1";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-2,j-1});
                    }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackknight2cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackknight2exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovableknightblack(i,j,board)){
            if(j+2<=7&&i-1>=0&&(iswhite(board[i-1][j+2])||board[i-1][j+2]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j+2]="blackknight2";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j+2});
                    }
            }
            if(j+2<=7&&i+1<=7&&(iswhite(board[i+1][j+2])||board[i+1][j+2]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i+1][j+2]="blackknight2";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i+1,j+2});
                    }
            }
            if(j-2>=0&&i-1>=0&&(iswhite(board[i-1][j-2])||board[i-1][j-2]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-1][j-2]="blackknight2";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-1,j-2});
                    }
            }
            if(j-2>=0&&i+1<=7&&(iswhite(board[i+1][j-2])||board[i+1][j-2]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i+1][j-2]="blackknight2";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i+1,j-2});
                    };
            }
            if(i+2<=7&&j+1<=7&&(iswhite(board[i+2][j+1])||board[i+2][j+1]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i+2][j+1]="blackknight2";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i+2,j+1});
                    }
            }
            if(i+2<=7&&j-1>=0&&(iswhite(board[i+2][j-1])||board[i+2][j-1]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i+2][j-1]="blackknight2";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i+2,j-1});
                    }
            }
            if(i-2>=0&&j+1<=7&&(iswhite(board[i-2][j+1])||board[i-2][j+1]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-2][j+1]="blackknight2";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-2,j+1});
                    }
            }
            if(i-2>=0&&j-1>=0&&(iswhite(board[i-2][j-1])||board[i-2][j-1]=="E")){
                    vector<vector<string>>boardtemp=board;
                    boardtemp[i][j]="E";
                    boardtemp[i-2][j-1]="blackknight2";
                    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
                    if(!ischeckbywhite(v1[0].first,v1[0].second,boardtemp)){
                        ans.push_back({i-2,j-1});
                    }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackrook1cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackrook1exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablerookblack_(i,j,board)){
            for(int z=1;z<8;z++){
                if(i-z>=0&&(iswhite(board[i-z][j])||board[i-z][j]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&(iswhite(board[i+z][j])||board[i+z][j]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(j-z>=0&&(iswhite(board[i][j-z])||board[i][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(j+z<=7&&(iswhite(board[i][j+z])||board[i][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i,j+z});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackrook2cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackrook2exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablerookblack_(i,j,board)){
            for(int z=1;z<8;z++){
                if(i-z>=0&&(iswhite(board[i-z][j])||board[i-z][j]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&(iswhite(board[i+z][j])||board[i+z][j]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(j-z>=0&&(iswhite(board[i][j-z])||board[i][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(j+z<=7&&(iswhite(board[i][j+z])||board[i][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i,j+z});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackbishop1cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackbishop1exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablebishopblack_(i,j,board)){
            for(int z=1;z<8;z++){
                if(i-z>=0&&j+z<=7&&(iswhite(board[i-z][j+z])||board[i-z][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j+z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&j-z>=0&&(iswhite(board[i+z][j-z])||board[i+z][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i-z>=0&&j-z>=0&&(iswhite(board[i-z][j-z])||board[i-z][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&j+z<=7&&(iswhite(board[i+z][j+z])||board[i+z][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j+z});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackbishop2cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackbishop2exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablebishopblack_(i,j,board)){
            for(int z=1;z<8;z++){
                if(i-z>=0&&j+z<=7&&(iswhite(board[i-z][j+z])||board[i-z][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j+z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&j-z>=0&&(iswhite(board[i+z][j-z])||board[i+z][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i-z>=0&&j-z>=0&&(iswhite(board[i-z][j-z])||board[i-z][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&j+z<=7&&(iswhite(board[i+z][j+z])||board[i+z][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j+z});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackqueencango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackqueenexist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablequeenblack_(i,j,board)){
            for(int z=1;z<8;z++){
                if(i-z>=0&&(iswhite(board[i-z][j])||board[i-z][j]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&(iswhite(board[i+z][j])||board[i+z][j]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(j-z>=0&&(iswhite(board[i][j-z])||board[i][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(j+z<=7&&(iswhite(board[i][j+z])||board[i][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i,j+z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i-z>=0&&j+z<=7&&(iswhite(board[i-z][j+z])||board[i-z][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j+z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&j-z>=0&&(iswhite(board[i+z][j-z])||board[i+z][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i-z>=0&&j-z>=0&&(iswhite(board[i-z][j-z])||board[i-z][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&j+z<=7&&(iswhite(board[i+z][j+z])||board[i+z][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j+z});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> whereblackkingcango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoesblackkingexist(board);
    int i=v[0].first;
    int j=v[0].second;
    if(i+1<=7){
        if(!isattackedbywhite(i+1,j,board)&&!isblack(board[i+1][j])){
            ans.push_back({i+1,j});
        }
    }
    if(i-1>=0){
        if(!isattackedbywhite(i-1,j,board)&&!isblack(board[i-1][j])){
            ans.push_back({i-1,j});
        }
    }
    if(j+1<=7){
        if(!isattackedbywhite(i,j+1,board)&&!isblack(board[i][j+1])){
            ans.push_back({i,j+1});
        }
    }
    if(j-1>=0){
        if(!isattackedbywhite(i,j-1,board)&&!isblack(board[i][j-1])){
            ans.push_back({i,j-1});
        }
    }
    if(i+1<=7&&j+1<=7){
        if(!isattackedbywhite(i+1,j+1,board)&&!isblack(board[i+1][j+1])){
            ans.push_back({i+1,j+1});
        }
    }
    if(i+1<=7&&j-1>=0){
        if(!isattackedbywhite(i+1,j-1,board)&&!isblack(board[i+1][j-1])){
            ans.push_back({i+1,j-1});
        }
    }
    if(i-1>=0&&j+1<=7){
        if(!isattackedbywhite(i-1,j+1,board)&&!isblack(board[i-1][j+1])){
            ans.push_back({i-1,j+1});
        }
    }
    if(i-1>=0&&j-1>=0){
        if(!isattackedbywhite(i-1,j-1,board)&&!isblack(board[i-1][j-1])){
            ans.push_back({i-1,j-1});
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhitepawn1cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhitepawn1exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnwhite(i,j,board)){
            if(i+1<=7){
                if(board[i+1][j]=="E"){
                    ans.push_back({i+1,j});
                }
            }
            if(i==1&&board[3][j]=="E"){
                if(board[i+1][j]=="E"&&board[i+2][j]=="E"){
                    ans.push_back({i+2,j});
                }
            }
            if(i+1<=7&&j+1<=7){
                if(isblack(board[i+1][j+1])){
                    ans.push_back({i+1,j+1});
                }
            }
            if(i+1<=7&&j-1>=0){
                if(isblack(board[i+1][j-1])){
                    ans.push_back({i+1,j-1});
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhitepawn2cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhitepawn2exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnwhite(i,j,board)){
            if(i+1<=7){
                if(board[i+1][j]=="E"){
                    ans.push_back({i+1,j});
                }
            }
            if(i==1&&board[3][j]=="E"){
                if(board[i+1][j]=="E"&&board[i+2][j]=="E"){
                    ans.push_back({i+2,j});
                }
            }
            if(i+1<=7&&j+1<=7){
                if(isblack(board[i+1][j+1])){
                    ans.push_back({i+1,j+1});
                }
            }
            if(i+1<=7&&j-1>=0){
                if(isblack(board[i+1][j-1])){
                    ans.push_back({i+1,j-1});
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhitepawn3cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhitepawn3exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnwhite(i,j,board)){
            if(i+1<=7){
                if(board[i+1][j]=="E"){
                    ans.push_back({i+1,j});
                }
            }
            if(i==1&&board[3][j]=="E"){
                if(board[i+1][j]=="E"&&board[i+2][j]=="E"){
                    ans.push_back({i+2,j});
                }
            }
            if(i+1<=7&&j+1<=7){
                if(isblack(board[i+1][j+1])){
                    ans.push_back({i+1,j+1});
                }
            }
            if(i+1<=7&&j-1>=0){
                if(isblack(board[i+1][j-1])){
                    ans.push_back({i+1,j-1});
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhitepawn4cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhitepawn4exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnwhite(i,j,board)){
            if(i+1<=7){
                if(board[i+1][j]=="E"){
                    ans.push_back({i+1,j});
                }
            }
            if(i==1&&board[3][j]=="E"){
                if(board[i+1][j]=="E"&&board[i+2][j]=="E"){
                    ans.push_back({i+2,j});
                }
            }
            if(i+1<=7&&j+1<=7){
                if(isblack(board[i+1][j+1])){
                    ans.push_back({i+1,j+1});
                }
            }
            if(i+1<=7&&j-1>=0){
                if(isblack(board[i+1][j-1])){
                    ans.push_back({i+1,j-1});
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhitepawn5cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhitepawn5exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnwhite(i,j,board)){
            if(i+1<=7){
                if(board[i+1][j]=="E"){
                    ans.push_back({i+1,j});
                }
            }
            if(i==1&&board[3][j]=="E"){
                if(board[i+1][j]=="E"&&board[i+2][j]=="E"){
                    ans.push_back({i+2,j});
                }
            }
            if(i+1<=7&&j+1<=7){
                if(isblack(board[i+1][j+1])){
                    ans.push_back({i+1,j+1});
                }
            }
            if(i+1<=7&&j-1>=0){
                if(isblack(board[i+1][j-1])){
                    ans.push_back({i+1,j-1});
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhitepawn6cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhitepawn6exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnwhite(i,j,board)){
            if(i+1<=7){
                if(board[i+1][j]=="E"){
                    ans.push_back({i+1,j});
                }
            }
            if(i==1&&board[3][j]=="E"){
                if(board[i+1][j]=="E"&&board[i+2][j]=="E"){
                    ans.push_back({i+2,j});
                }
            }
            if(i+1<=7&&j+1<=7){
                if(isblack(board[i+1][j+1])){
                    ans.push_back({i+1,j+1});
                }
            }
            if(i+1<=7&&j-1>=0){
                if(isblack(board[i+1][j-1])){
                    ans.push_back({i+1,j-1});
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhitepawn7cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhitepawn7exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnwhite(i,j,board)){
            if(i+1<=7){
                if(board[i+1][j]=="E"){
                    ans.push_back({i+1,j});
                }
            }
            if(i==1&&board[3][j]=="E"){
                if(board[i+1][j]=="E"&&board[i+2][j]=="E"){
                    ans.push_back({i+2,j});
                }
            }
            if(i+1<=7&&j+1<=7){
                if(isblack(board[i+1][j+1])){
                    ans.push_back({i+1,j+1});
                }
            }
            if(i+1<=7&&j-1>=0){
                if(isblack(board[i+1][j-1])){
                    ans.push_back({i+1,j-1});
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhitepawn8cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhitepawn8exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablepawnwhite(i,j,board)){
            if(i+1<=7){
                if(board[i+1][j]=="E"){
                    ans.push_back({i+1,j});
                }
            }
            if(i==1&&board[3][j]=="E"){
                if(board[i+1][j]=="E"&&board[i+2][j]=="E"){
                    ans.push_back({i+2,j});
                }
            }
            if(i+1<=7&&j+1<=7){
                if(isblack(board[i+1][j+1])){
                    ans.push_back({i+1,j+1});
                }
            }
            if(i+1<=7&&j-1>=0){
                if(isblack(board[i+1][j-1])){
                    ans.push_back({i+1,j-1});
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhiteknight1cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhiteknight1exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovableknightwhite(i,j,board)){
            if(j+2<=7&&i-1>=0&&(isblack(board[i-1][j+2])||board[i-1][j+2]=="E")){
                ans.push_back({i-1,j+2});
            }
            if(j+2<=7&&i+1<=7&&(isblack(board[i+1][j+2])||board[i+1][j+2]=="E")){
                ans.push_back({i+1,j+2});
            }
            if(j-2>=0&&i-1>=0&&(isblack(board[i-1][j-2])||board[i-1][j-2]=="E")){
                ans.push_back({i-1,j-2});
            }
            if(j-2>=0&&i+1<=7&&(isblack(board[i+1][j-2])||board[i+1][j-2]=="E")){
                ans.push_back({i+1,j-2});
            }
            if(i+2<=7&&j+1<=7&&(isblack(board[i+2][j+1])||board[i+2][j+1]=="E")){
                ans.push_back({i+2,j+1});
            }
            if(i+2<=7&&j-1>=0&&(isblack(board[i+2][j-1])||board[i+2][j-1]=="E")){
                ans.push_back({i+2,j-1});
            }
            if(i-2>=0&&j+1<=7&&(isblack(board[i-2][j+1])||board[i-2][j+1]=="E")){
                ans.push_back({i-2,j+1});
            }
            if(i-2>=0&&j-1>=0&&(isblack(board[i-2][j-1])||board[i-2][j-1]=="E")){
                ans.push_back({i-2,j-1});
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhiteknight2cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhiteknight2exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovableknightwhite(i,j,board)){
            if(j+2<=7&&i-1>=0&&(isblack(board[i-1][j+2])||board[i-1][j+2]=="E")){
                ans.push_back({i-1,j+2});
            }
            if(j+2<=7&&i+1<=7&&(isblack(board[i+1][j+2])||board[i+1][j+2]=="E")){
                ans.push_back({i+1,j+2});
            }
            if(j-2>=0&&i-1>=0&&(isblack(board[i-1][j-2])||board[i-1][j-2]=="E")){
                ans.push_back({i-1,j-2});
            }
            if(j-2>=0&&i+1<=7&&(isblack(board[i+1][j-2])||board[i+1][j-2]=="E")){
                ans.push_back({i+1,j-2});
            }
            if(i+2<=7&&j+1<=7&&(isblack(board[i+2][j+1])||board[i+2][j+1]=="E")){
                ans.push_back({i+2,j+1});
            }
            if(i+2<=7&&j-1>=0&&(isblack(board[i+2][j-1])||board[i+2][j-1]=="E")){
                ans.push_back({i+2,j-1});
            }
            if(i-2>=0&&j+1<=7&&(isblack(board[i-2][j+1])||board[i-2][j+1]=="E")){
                ans.push_back({i-2,j+1});
            }
            if(i-2>=0&&j-1>=0&&(isblack(board[i-2][j-1])||board[i-2][j-1]=="E")){
                ans.push_back({i-2,j-1});
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhiterook1cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhiterook1exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablerookwhite_(i,j,board)){
            for(int z=1;z<8;z++){
                if(i-z>=0&&(isblack(board[i-z][j])||board[i-z][j]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&(isblack(board[i+z][j])||board[i+z][j]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(j-z>=0&&(isblack(board[i][j-z])||board[i][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(j+z<=7&&(isblack(board[i][j+z])||board[i][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i,j+z});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhiterook2cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhiterook2exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablerookwhite_(i,j,board)){
            for(int z=1;z<8;z++){
                if(i-z>=0&&(isblack(board[i-z][j])||board[i-z][j]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&(isblack(board[i+z][j])||board[i+z][j]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(j-z>=0&&(isblack(board[i][j-z])||board[i][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(j+z<=7&&(isblack(board[i][j+z])||board[i][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i,j+z});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhitebishop1cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhitebishop1exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablebishopwhite_(i,j,board)){
            for(int z=1;z<8;z++){
                if(i-z>=0&&j+z<=7&&(isblack(board[i-z][j+z])||board[i-z][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j+z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&j-z>=0&&(isblack(board[i+z][j-z])||board[i+z][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i-z>=0&&j-z>=0&&(isblack(board[i-z][j-z])||board[i-z][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&j+z<=7&&(isblack(board[i+z][j+z])||board[i+z][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j+z});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhitebishop2cango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhitebishop2exist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablebishopwhite_(i,j,board)){
            for(int z=1;z<8;z++){
                if(i-z>=0&&j+z<=7&&(isblack(board[i-z][j+z])||board[i-z][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j+z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&j-z>=0&&(isblack(board[i+z][j-z])||board[i+z][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i-z>=0&&j-z>=0&&(isblack(board[i-z][j-z])||board[i-z][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&j+z<=7&&(isblack(board[i+z][j+z])||board[i+z][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j+z});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhitequeencango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhitequeenexist(board);
    for(int k=0;k<v.size();k++){
        int i=v[k].first;
        int j=v[k].second;
        if(ismovablequeenwhite_(i,j,board)){
            for(int z=1;z<8;z++){
                if(i-z>=0&&(isblack(board[i-z][j])||board[i-z][j]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&(isblack(board[i+z][j])||board[i+z][j]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(j-z>=0&&(isblack(board[i][j-z])||board[i][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(j+z<=7&&(isblack(board[i][j+z])||board[i][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i,j+z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i-z>=0&&j+z<=7&&(isblack(board[i-z][j+z])||board[i-z][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j+z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&j-z>=0&&(isblack(board[i+z][j-z])||board[i+z][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i-z>=0&&j-z>=0&&(isblack(board[i-z][j-z])||board[i-z][j-z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i-l][j-l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i-z,j-z});
                    }
                }
            }
            for(int z=1;z<8;z++){
                if(i+z<=7&&j+z<=7&&(isblack(board[i+z][j+z])||board[i+z][j+z]=="E")){
                    int o=0;
                    for(int l=1;l<z;l++){
                        if(board[i+l][j+l]=="E"){
                            o++;
                        }
                    }
                    if(o==z-1){
                        ans.push_back({i+z,j+z});
                    }
                }
            }
        }
    }
    return ans;
}
vector<pair<int,int>> wherewhitekingcango(vector<vector<string>>&board){
    vector<pair<int,int>>ans;
    vector<pair<int,int>>v=wheredoeswhitekingexist(board);
    int i=v[0].first;
    int j=v[0].second;
    if(i+1<=7){
        if(!isattackedbyblack(i+1,j,board)&&!iswhite(board[i+1][j])){
            ans.push_back({i+1,j});
        }
    }
    if(i-1>=0){
        if(!isattackedbyblack(i-1,j,board)&&!iswhite(board[i-1][j])){
            ans.push_back({i-1,j});
        }
    }
    if(j+1<=7){
        if(!isattackedbyblack(i,j+1,board)&&!iswhite(board[i][j+1])){
            ans.push_back({i,j+1});
        }
    }
    if(j-1>=0){
        if(!isattackedbyblack(i,j-1,board)&&!iswhite(board[i][j-1])){
            ans.push_back({i,j-1});
        }
    }
    if(i+1<=7&&j+1<=7){
        if(!isattackedbyblack(i+1,j+1,board)&&!iswhite(board[i+1][j+1])){
            ans.push_back({i+1,j+1});
        }
    }
    if(i+1<=7&&j-1>=0){
        if(!isattackedbyblack(i+1,j-1,board)&&!iswhite(board[i+1][j-1])){
            ans.push_back({i+1,j-1});
        }
    }
    if(i-1>=0&&j+1<=7){
        if(!isattackedbyblack(i-1,j+1,board)&&!iswhite(board[i-1][j+1])){
            ans.push_back({i-1,j+1});
        }
    }
    if(i-1>=0&&j-1>=0){
        if(!isattackedbyblack(i-1,j-1,board)&&!iswhite(board[i-1][j-1])){
            ans.push_back({i-1,j-1});
        }
    }
    return ans;
}
void cancheckbeblockedbywhitesimulator(vector<vector<string>>&board){
        if(doeswhitepawn1exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn1exist(board);
            vector<pair<int,int>>vb=wherewhitepawn1cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn1";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whitepawn1";
                    return;
                }
            }
        }
        if(doeswhitepawn2exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn2exist(board);
            vector<pair<int,int>>vb=wherewhitepawn2cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn2";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whitepawn2";
                    return;
                }
            }
        }
        if(doeswhitepawn3exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn3exist(board);
            vector<pair<int,int>>vb=wherewhitepawn3cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn3";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whitepawn3";
                    return;
                }
            }
        }
        if(doeswhitepawn4exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn4exist(board);
            vector<pair<int,int>>vb=wherewhitepawn4cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn4";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whitepawn4";
                    return;
                }
            }
        }
        if(doeswhitepawn5exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn5exist(board);
            vector<pair<int,int>>vb=wherewhitepawn5cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn5";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whitepawn5";
                    return;
                }
            }
        }
        if(doeswhitepawn6exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn6exist(board);
            vector<pair<int,int>>vb=wherewhitepawn6cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn6";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whitepawn6";
                    return;
                }
            }
        }
        if(doeswhitepawn7exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn7exist(board);
            vector<pair<int,int>>vb=wherewhitepawn7cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn7";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whitepawn7";
                    return;
                }
            }
        }
        if(doeswhitepawn8exist(board)){
            vector<pair<int,int>>va=wheredoeswhitepawn8exist(board);
            vector<pair<int,int>>vb=wherewhitepawn8cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitepawn8";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whitepawn8";
                    return;
                }
            }
        }
        if(doeswhiteknight1exist(board)){
            vector<pair<int,int>>va=wheredoeswhiteknight1exist(board);
            vector<pair<int,int>>vb=wherewhiteknight1cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whiteknight1";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whiteknight1";
                    return;
                }
            }
        }
        if(doeswhiteknight2exist(board)){
            vector<pair<int,int>>va=wheredoeswhiteknight2exist(board);
            vector<pair<int,int>>vb=wherewhiteknight2cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whiteknight2";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whiteknight2";
                    return;
                }
            }
        }
        if(doeswhitebishop1exist(board)){
            vector<pair<int,int>>va=wheredoeswhitebishop1exist(board);
            vector<pair<int,int>>vb=wherewhitebishop1cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitebishop1";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whitebishop1";
                    return;
                }
            }
        }
        if(doeswhitebishop2exist(board)){
            vector<pair<int,int>>va=wheredoeswhitebishop2exist(board);
            vector<pair<int,int>>vb=wherewhitebishop2cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitebishop2";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whitebishop2";
                    return;
                }
            }
        }
        if(doeswhiterook1exist(board)){
            vector<pair<int,int>>va=wheredoeswhiterook1exist(board);
            vector<pair<int,int>>vb=wherewhiterook1cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whiterook1";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whiterook1";
                    return;
                }
            }
        }
        if(doeswhiterook2exist(board)){
            vector<pair<int,int>>va=wheredoeswhiterook2exist(board);
            vector<pair<int,int>>vb=wherewhiterook2cango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whiterook2";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whiterook2";
                    return;
                }
            }
        }
        if(doeswhitequeenexist(board)){
            vector<pair<int,int>>va=wheredoeswhitequeenexist(board);
            vector<pair<int,int>>vb=wherewhitequeencango(board);
            vector<pair<int,int>>vc=wheredoeswhitekingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="whitequeen";
                if(!ischeckbyblack(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="whitequeen";
                    return;
                }
            }
        }
    return;
}
void cancheckbeblockedbyblacksimulator(vector<vector<string>>&board){
        if(doesblackpawn1exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn1exist(board);
            vector<pair<int,int>>vb=whereblackpawn1cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn1";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackpawn1";
                    return;
                }
            }
        }
        if(doesblackpawn2exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn2exist(board);
            vector<pair<int,int>>vb=whereblackpawn2cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn2";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackpawn2";
                    return;
                }
            }
        }
        if(doesblackpawn3exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn3exist(board);
            vector<pair<int,int>>vb=whereblackpawn3cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn3";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackpawn3";
                    return;
                }
            }
        }
        if(doesblackpawn4exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn4exist(board);
            vector<pair<int,int>>vb=whereblackpawn4cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn4";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackpawn4";
                    return;
                }
            }
        }
        if(doesblackpawn5exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn5exist(board);
            vector<pair<int,int>>vb=whereblackpawn5cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn5";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackpawn5";
                    return;
                }
            }
        }
        if(doesblackpawn6exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn6exist(board);
            vector<pair<int,int>>vb=whereblackpawn6cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn6";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackpawn6";
                    return;
                }
            }
        }
        if(doesblackpawn7exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn7exist(board);
            vector<pair<int,int>>vb=whereblackpawn7cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn7";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackpawn7";
                    return;
                }
            }
        }
        if(doesblackpawn8exist(board)){
            vector<pair<int,int>>va=wheredoesblackpawn8exist(board);
            vector<pair<int,int>>vb=whereblackpawn8cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackpawn8";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackpawn8";
                    return;
                }
            }
        }
        if(doesblackknight1exist(board)){
            vector<pair<int,int>>va=wheredoesblackknight1exist(board);
            vector<pair<int,int>>vb=whereblackknight1cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackknight1";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackknight1";
                    return;
                }
            }
        }
        if(doesblackknight2exist(board)){
            vector<pair<int,int>>va=wheredoesblackknight2exist(board);
            vector<pair<int,int>>vb=whereblackknight2cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackknight2";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackknight2";
                    return;
                }
            }
        }
        if(doesblackbishop1exist(board)){
            vector<pair<int,int>>va=wheredoesblackbishop1exist(board);
            vector<pair<int,int>>vb=whereblackbishop1cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackbishop1";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackbishop1";
                    return;
                }
            }
        }
        if(doesblackbishop2exist(board)){
            vector<pair<int,int>>va=wheredoesblackbishop2exist(board);
            vector<pair<int,int>>vb=whereblackbishop2cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackbishop2";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackbishop2";
                    return;
                }
            }
        }
        if(doesblackrook1exist(board)){
            vector<pair<int,int>>va=wheredoesblackrook1exist(board);
            vector<pair<int,int>>vb=whereblackrook1cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackrook1";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackrook1";
                    return;
                }
            }
        }
        if(doesblackrook2exist(board)){
            vector<pair<int,int>>va=wheredoesblackrook2exist(board);
            vector<pair<int,int>>vb=whereblackrook2cango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackrook2";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackrook2";
                    return;
                }
            }
        }
        if(doesblackqueenexist(board)){
            vector<pair<int,int>>va=wheredoesblackqueenexist(board);
            vector<pair<int,int>>vb=whereblackqueencango(board);
            vector<pair<int,int>>vc=wheredoesblackkingexist(board);
            for(int k=0;k<vb.size();k++){
                vector<vector<string>>boardtemp=board;
                boardtemp[va[0].first][va[0].second]="E";
                boardtemp[vb[k].first][vb[k].second]="blackqueen";
                if(!ischeckbywhite(vc[0].first,vc[0].second,boardtemp)){
                    board[va[0].first][va[0].second]="E";
                    board[vb[k].first][vb[k].second]="blackqueen";
                    return;
                }
            }
        }
    return;
}
void canattackerbecapturedbyblacksimulator(vector<vector<string>>&board){
    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
    int i=v1[0].first;
    int j=v1[0].second;
    vector<int>v=isattackfromwhitepawn(i,j,board);
                if(v.size()){
                    if(doesblackpawn1exist(board)){
                        if(iscapturablebyblackpawn1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn1exist(board);
                            board[v[0]][v[1]]="blackpawn1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn2exist(board)){
                        if(iscapturablebyblackpawn2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn2exist(board);
                            board[v[0]][v[1]]="blackpawn2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn3exist(board)){
                        if(iscapturablebyblackpawn3(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn3exist(board);
                            board[v[0]][v[1]]="blackpawn3";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn4exist(board)){
                        if(iscapturablebyblackpawn4(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn4exist(board);
                            board[v[0]][v[1]]="blackpawn4";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn5exist(board)){
                        if(iscapturablebyblackpawn5(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn5exist(board);
                            board[v[0]][v[1]]="blackpawn5";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn6exist(board)){
                        if(iscapturablebyblackpawn6(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn6exist(board);
                            board[v[0]][v[1]]="blackpawn6";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn7exist(board)){
                        if(iscapturablebyblackpawn7(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn7exist(board);
                            board[v[0]][v[1]]="blackpawn7";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn8exist(board)){
                        if(iscapturablebyblackpawn8(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn8exist(board);
                            board[v[0]][v[1]]="blackpawn8";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackknight1exist(board)){
                        if(iscapturablebyblackknight1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackknight1exist(board);
                            board[v[0]][v[1]]="blackknight1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackknight2exist(board)){
                        if(iscapturablebyblackknight2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackknight2exist(board);
                            board[v[0]][v[1]]="blackknight2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackbishop1exist(board)){
                        if(iscapturablebyblackbishop1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackbishop1exist(board);
                            board[v[0]][v[1]]="blackbishop1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackbishop2exist(board)){
                        if(iscapturablebyblackbishop2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackbishop2exist(board);
                            board[v[0]][v[1]]="blackbishop2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackqueenexist(board)){
                        if(iscapturablebyblackqueen(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackqueenexist(board);
                            board[v[0]][v[1]]="blackqueen";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(iscapturablebyblackking(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackkingexist(board);
                            board[v[0]][v[1]]="blackking";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                    }
                }
                v.clear();
                v=isattackfromwhiteknight(i,j,board);
                if(v.size()){
                    if(doesblackpawn1exist(board)){
                        if(iscapturablebyblackpawn1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn1exist(board);
                            board[v[0]][v[1]]="blackpawn1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn2exist(board)){
                        if(iscapturablebyblackpawn2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn2exist(board);
                            board[v[0]][v[1]]="blackpawn2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn3exist(board)){
                        if(iscapturablebyblackpawn3(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn3exist(board);
                            board[v[0]][v[1]]="blackpawn3";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn4exist(board)){
                        if(iscapturablebyblackpawn4(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn4exist(board);
                            board[v[0]][v[1]]="blackpawn4";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn5exist(board)){
                        if(iscapturablebyblackpawn5(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn5exist(board);
                            board[v[0]][v[1]]="blackpawn5";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn6exist(board)){
                        if(iscapturablebyblackpawn6(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn6exist(board);
                            board[v[0]][v[1]]="blackpawn6";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn7exist(board)){
                        if(iscapturablebyblackpawn7(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn7exist(board);
                            board[v[0]][v[1]]="blackpawn7";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn8exist(board)){
                        if(iscapturablebyblackpawn8(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn8exist(board);
                            board[v[0]][v[1]]="blackpawn8";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackknight1exist(board)){
                        if(iscapturablebyblackknight1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackknight1exist(board);
                            board[v[0]][v[1]]="blackknight1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackknight2exist(board)){
                        if(iscapturablebyblackknight2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackknight2exist(board);
                            board[v[0]][v[1]]="blackknight2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackbishop1exist(board)){
                        if(iscapturablebyblackbishop1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackbishop1exist(board);
                            board[v[0]][v[1]]="blackbishop1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackbishop2exist(board)){
                        if(iscapturablebyblackbishop2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackbishop2exist(board);
                            board[v[0]][v[1]]="blackbishop2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackqueenexist(board)){
                        if(iscapturablebyblackqueen(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackqueenexist(board);
                            board[v[0]][v[1]]="blackqueen";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(iscapturablebyblackking(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackkingexist(board);
                            board[v[0]][v[1]]="blackking";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                    }
                }
                v.clear();
                v=isattackfromwhitebishop(i,j,board);
                if(v.size()){
                    if(doesblackpawn1exist(board)){
                        if(iscapturablebyblackpawn1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn1exist(board);
                            board[v[0]][v[1]]="blackpawn1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn2exist(board)){
                        if(iscapturablebyblackpawn2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn2exist(board);
                            board[v[0]][v[1]]="blackpawn2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn3exist(board)){
                        if(iscapturablebyblackpawn3(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn3exist(board);
                            board[v[0]][v[1]]="blackpawn3";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn4exist(board)){
                        if(iscapturablebyblackpawn4(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn4exist(board);
                            board[v[0]][v[1]]="blackpawn4";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn5exist(board)){
                        if(iscapturablebyblackpawn5(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn5exist(board);
                            board[v[0]][v[1]]="blackpawn5";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn6exist(board)){
                        if(iscapturablebyblackpawn6(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn6exist(board);
                            board[v[0]][v[1]]="blackpawn6";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn7exist(board)){
                        if(iscapturablebyblackpawn7(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn7exist(board);
                            board[v[0]][v[1]]="blackpawn7";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn8exist(board)){
                        if(iscapturablebyblackpawn8(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn8exist(board);
                            board[v[0]][v[1]]="blackpawn8";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackknight1exist(board)){
                        if(iscapturablebyblackknight1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackknight1exist(board);
                            board[v[0]][v[1]]="blackknight1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackknight2exist(board)){
                        if(iscapturablebyblackknight2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackknight2exist(board);
                            board[v[0]][v[1]]="blackknight2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackbishop1exist(board)){
                        if(iscapturablebyblackbishop1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackbishop1exist(board);
                            board[v[0]][v[1]]="blackbishop1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackbishop2exist(board)){
                        if(iscapturablebyblackbishop2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackbishop2exist(board);
                            board[v[0]][v[1]]="blackbishop2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackqueenexist(board)){
                        if(iscapturablebyblackqueen(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackqueenexist(board);
                            board[v[0]][v[1]]="blackqueen";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(iscapturablebyblackking(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackkingexist(board);
                            board[v[0]][v[1]]="blackking";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                    }
                }
                v.clear();
                v=isattackfromwhiterook(i,j,board);
                if(v.size()){
                    if(doesblackpawn1exist(board)){
                        if(iscapturablebyblackpawn1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn1exist(board);
                            board[v[0]][v[1]]="blackpawn1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn2exist(board)){
                        if(iscapturablebyblackpawn2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn2exist(board);
                            board[v[0]][v[1]]="blackpawn2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn3exist(board)){
                        if(iscapturablebyblackpawn3(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn3exist(board);
                            board[v[0]][v[1]]="blackpawn3";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn4exist(board)){
                        if(iscapturablebyblackpawn4(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn4exist(board);
                            board[v[0]][v[1]]="blackpawn4";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn5exist(board)){
                        if(iscapturablebyblackpawn5(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn5exist(board);
                            board[v[0]][v[1]]="blackpawn5";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn6exist(board)){
                        if(iscapturablebyblackpawn6(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn6exist(board);
                            board[v[0]][v[1]]="blackpawn6";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn7exist(board)){
                        if(iscapturablebyblackpawn7(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn7exist(board);
                            board[v[0]][v[1]]="blackpawn7";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn8exist(board)){
                        if(iscapturablebyblackpawn8(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn8exist(board);
                            board[v[0]][v[1]]="blackpawn8";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackknight1exist(board)){
                        if(iscapturablebyblackknight1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackknight1exist(board);
                            board[v[0]][v[1]]="blackknight1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackknight2exist(board)){
                        if(iscapturablebyblackknight2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackknight2exist(board);
                            board[v[0]][v[1]]="blackknight2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackbishop1exist(board)){
                        if(iscapturablebyblackbishop1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackbishop1exist(board);
                            board[v[0]][v[1]]="blackbishop1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackbishop2exist(board)){
                        if(iscapturablebyblackbishop2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackbishop2exist(board);
                            board[v[0]][v[1]]="blackbishop2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackqueenexist(board)){
                        if(iscapturablebyblackqueen(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackqueenexist(board);
                            board[v[0]][v[1]]="blackqueen";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(iscapturablebyblackking(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackkingexist(board);
                            board[v[0]][v[1]]="blackking";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                    }
                }
                v.clear();
                v=isattackfromwhitequeen(i,j,board);
                if(v.size()){
                    if(doesblackpawn1exist(board)){
                        if(iscapturablebyblackpawn1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn1exist(board);
                            board[v[0]][v[1]]="blackpawn1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn2exist(board)){
                        if(iscapturablebyblackpawn2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn2exist(board);
                            board[v[0]][v[1]]="blackpawn2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn3exist(board)){
                        if(iscapturablebyblackpawn3(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn3exist(board);
                            board[v[0]][v[1]]="blackpawn3";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn4exist(board)){
                        if(iscapturablebyblackpawn4(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn4exist(board);
                            board[v[0]][v[1]]="blackpawn4";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn5exist(board)){
                        if(iscapturablebyblackpawn5(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn5exist(board);
                            board[v[0]][v[1]]="blackpawn5";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn6exist(board)){
                        if(iscapturablebyblackpawn6(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn6exist(board);
                            board[v[0]][v[1]]="blackpawn6";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn7exist(board)){
                        if(iscapturablebyblackpawn7(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn7exist(board);
                            board[v[0]][v[1]]="blackpawn7";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackpawn8exist(board)){
                        if(iscapturablebyblackpawn8(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackpawn8exist(board);
                            board[v[0]][v[1]]="blackpawn8";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackknight1exist(board)){
                        if(iscapturablebyblackknight1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackknight1exist(board);
                            board[v[0]][v[1]]="blackknight1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackknight2exist(board)){
                        if(iscapturablebyblackknight2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackknight2exist(board);
                            board[v[0]][v[1]]="blackknight2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackbishop1exist(board)){
                        if(iscapturablebyblackbishop1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackbishop1exist(board);
                            board[v[0]][v[1]]="blackbishop1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackbishop2exist(board)){
                        if(iscapturablebyblackbishop2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackbishop2exist(board);
                            board[v[0]][v[1]]="blackbishop2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doesblackqueenexist(board)){
                        if(iscapturablebyblackqueen(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackqueenexist(board);
                            board[v[0]][v[1]]="blackqueen";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(iscapturablebyblackking(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoesblackkingexist(board);
                            board[v[0]][v[1]]="blackking";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                    }
                }
                v.clear();
}
void canattackerbecapturedbywhitesimulator(vector<vector<string>>&board){
    vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
    int i=v1[0].first;
    int j=v1[0].second;
    vector<int>v=isattackfromblackpawn(i,j,board);
                if(v.size()){
                    if(doeswhitepawn1exist(board)){
                        if(iscapturablebywhitepawn1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn1exist(board);
                            board[v[0]][v[1]]="whitepawn1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn2exist(board)){
                        if(iscapturablebywhitepawn2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn2exist(board);
                            board[v[0]][v[1]]="whitepawn2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn3exist(board)){
                        if(iscapturablebywhitepawn3(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn3exist(board);
                            board[v[0]][v[1]]="whitepawn3";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn4exist(board)){
                        if(iscapturablebywhitepawn4(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn4exist(board);
                            board[v[0]][v[1]]="whitepawn4";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn5exist(board)){
                        if(iscapturablebywhitepawn5(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn5exist(board);
                            board[v[0]][v[1]]="whitepawn5";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn6exist(board)){
                        if(iscapturablebywhitepawn6(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn6exist(board);
                            board[v[0]][v[1]]="whitepawn6";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn7exist(board)){
                        if(iscapturablebywhitepawn7(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn7exist(board);
                            board[v[0]][v[1]]="whitepawn7";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn8exist(board)){
                        if(iscapturablebywhitepawn8(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn8exist(board);
                            board[v[0]][v[1]]="whitepawn8";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhiteknight1exist(board)){
                        if(iscapturablebywhiteknight1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhiteknight1exist(board);
                            board[v[0]][v[1]]="whiteknight1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhiteknight2exist(board)){
                        if(iscapturablebywhiteknight2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhiteknight2exist(board);
                            board[v[0]][v[1]]="whiteknight2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitebishop1exist(board)){
                        if(iscapturablebywhitebishop1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitebishop1exist(board);
                            board[v[0]][v[1]]="whitebishop1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitebishop2exist(board)){
                        if(iscapturablebywhitebishop2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitebishop2exist(board);
                            board[v[0]][v[1]]="whitebishop2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitequeenexist(board)){
                        if(iscapturablebywhitequeen(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitequeenexist(board);
                            board[v[0]][v[1]]="whitequeen";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(iscapturablebywhiteking(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
                            board[v[0]][v[1]]="whiteking";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                    }
                }
                v.clear();
                v=isattackfromblackknight(i,j,board);
                if(v.size()){
                    if(doeswhitepawn1exist(board)){
                        if(iscapturablebywhitepawn1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn1exist(board);
                            board[v[0]][v[1]]="whitepawn1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn2exist(board)){
                        if(iscapturablebywhitepawn2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn2exist(board);
                            board[v[0]][v[1]]="whitepawn2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn3exist(board)){
                        if(iscapturablebywhitepawn3(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn3exist(board);
                            board[v[0]][v[1]]="whitepawn3";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn4exist(board)){
                        if(iscapturablebywhitepawn4(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn4exist(board);
                            board[v[0]][v[1]]="whitepawn4";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn5exist(board)){
                        if(iscapturablebywhitepawn5(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn5exist(board);
                            board[v[0]][v[1]]="whitepawn5";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn6exist(board)){
                        if(iscapturablebywhitepawn6(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn6exist(board);
                            board[v[0]][v[1]]="whitepawn6";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn7exist(board)){
                        if(iscapturablebywhitepawn7(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn7exist(board);
                            board[v[0]][v[1]]="whitepawn7";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn8exist(board)){
                        if(iscapturablebywhitepawn8(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn8exist(board);
                            board[v[0]][v[1]]="whitepawn8";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhiteknight1exist(board)){
                        if(iscapturablebywhiteknight1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhiteknight1exist(board);
                            board[v[0]][v[1]]="whiteknight1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhiteknight2exist(board)){
                        if(iscapturablebywhiteknight2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhiteknight2exist(board);
                            board[v[0]][v[1]]="whiteknight2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitebishop1exist(board)){
                        if(iscapturablebywhitebishop1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitebishop1exist(board);
                            board[v[0]][v[1]]="whitebishop1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitebishop2exist(board)){
                        if(iscapturablebywhitebishop2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitebishop2exist(board);
                            board[v[0]][v[1]]="whitebishop2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitequeenexist(board)){
                        if(iscapturablebywhitequeen(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitequeenexist(board);
                            board[v[0]][v[1]]="whitequeen";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(iscapturablebywhiteking(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
                            board[v[0]][v[1]]="whiteking";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                    }
                }
                v.clear();
                v=isattackfromblackbishop(i,j,board);
                if(v.size()){
                    if(doeswhitepawn1exist(board)){
                        if(iscapturablebywhitepawn1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn1exist(board);
                            board[v[0]][v[1]]="whitepawn1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn2exist(board)){
                        if(iscapturablebywhitepawn2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn2exist(board);
                            board[v[0]][v[1]]="whitepawn2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn3exist(board)){
                        if(iscapturablebywhitepawn3(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn3exist(board);
                            board[v[0]][v[1]]="whitepawn3";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn4exist(board)){
                        if(iscapturablebywhitepawn4(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn4exist(board);
                            board[v[0]][v[1]]="whitepawn4";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn5exist(board)){
                        if(iscapturablebywhitepawn5(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn5exist(board);
                            board[v[0]][v[1]]="whitepawn5";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn6exist(board)){
                        if(iscapturablebywhitepawn6(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn6exist(board);
                            board[v[0]][v[1]]="whitepawn6";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn7exist(board)){
                        if(iscapturablebywhitepawn7(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn7exist(board);
                            board[v[0]][v[1]]="whitepawn7";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn8exist(board)){
                        if(iscapturablebywhitepawn8(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn8exist(board);
                            board[v[0]][v[1]]="whitepawn8";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhiteknight1exist(board)){
                        if(iscapturablebywhiteknight1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhiteknight1exist(board);
                            board[v[0]][v[1]]="whiteknight1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhiteknight2exist(board)){
                        if(iscapturablebywhiteknight2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhiteknight2exist(board);
                            board[v[0]][v[1]]="whiteknight2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitebishop1exist(board)){
                        if(iscapturablebywhitebishop1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitebishop1exist(board);
                            board[v[0]][v[1]]="whitebishop1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitebishop2exist(board)){
                        if(iscapturablebywhitebishop2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitebishop2exist(board);
                            board[v[0]][v[1]]="whitebishop2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitequeenexist(board)){
                        if(iscapturablebywhitequeen(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitequeenexist(board);
                            board[v[0]][v[1]]="whitequeen";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(iscapturablebywhiteking(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
                            board[v[0]][v[1]]="whiteking";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                    }
                }
                v.clear();
                v=isattackfromblackrook(i,j,board);
                if(v.size()){
                    if(doeswhitepawn1exist(board)){
                        if(iscapturablebywhitepawn1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn1exist(board);
                            board[v[0]][v[1]]="whitepawn1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn2exist(board)){
                        if(iscapturablebywhitepawn2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn2exist(board);
                            board[v[0]][v[1]]="whitepawn2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn3exist(board)){
                        if(iscapturablebywhitepawn3(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn3exist(board);
                            board[v[0]][v[1]]="whitepawn3";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn4exist(board)){
                        if(iscapturablebywhitepawn4(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn4exist(board);
                            board[v[0]][v[1]]="whitepawn4";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn5exist(board)){
                        if(iscapturablebywhitepawn5(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn5exist(board);
                            board[v[0]][v[1]]="whitepawn5";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn6exist(board)){
                        if(iscapturablebywhitepawn6(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn6exist(board);
                            board[v[0]][v[1]]="whitepawn6";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn7exist(board)){
                        if(iscapturablebywhitepawn7(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn7exist(board);
                            board[v[0]][v[1]]="whitepawn7";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn8exist(board)){
                        if(iscapturablebywhitepawn8(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn8exist(board);
                            board[v[0]][v[1]]="whitepawn8";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhiteknight1exist(board)){
                        if(iscapturablebywhiteknight1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhiteknight1exist(board);
                            board[v[0]][v[1]]="whiteknight1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhiteknight2exist(board)){
                        if(iscapturablebywhiteknight2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhiteknight2exist(board);
                            board[v[0]][v[1]]="whiteknight2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitebishop1exist(board)){
                        if(iscapturablebywhitebishop1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitebishop1exist(board);
                            board[v[0]][v[1]]="whitebishop1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitebishop2exist(board)){
                        if(iscapturablebywhitebishop2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitebishop2exist(board);
                            board[v[0]][v[1]]="whitebishop2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitequeenexist(board)){
                        if(iscapturablebywhitequeen(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitequeenexist(board);
                            board[v[0]][v[1]]="whitequeen";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(iscapturablebywhiteking(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
                            board[v[0]][v[1]]="whiteking";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                    }
                }
                v.clear();
                v=isattackfromblackqueen(i,j,board);
                if(v.size()){
                    if(doeswhitepawn1exist(board)){
                        if(iscapturablebywhitepawn1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn1exist(board);
                            board[v[0]][v[1]]="whitepawn1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn2exist(board)){
                        if(iscapturablebywhitepawn2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn2exist(board);
                            board[v[0]][v[1]]="whitepawn2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn3exist(board)){
                        if(iscapturablebywhitepawn3(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn3exist(board);
                            board[v[0]][v[1]]="whitepawn3";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn4exist(board)){
                        if(iscapturablebywhitepawn4(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn4exist(board);
                            board[v[0]][v[1]]="whitepawn4";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn5exist(board)){
                        if(iscapturablebywhitepawn5(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn5exist(board);
                            board[v[0]][v[1]]="whitepawn5";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn6exist(board)){
                        if(iscapturablebywhitepawn6(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn6exist(board);
                            board[v[0]][v[1]]="whitepawn6";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn7exist(board)){
                        if(iscapturablebywhitepawn7(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn7exist(board);
                            board[v[0]][v[1]]="whitepawn7";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitepawn8exist(board)){
                        if(iscapturablebywhitepawn8(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitepawn8exist(board);
                            board[v[0]][v[1]]="whitepawn8";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhiteknight1exist(board)){
                        if(iscapturablebywhiteknight1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhiteknight1exist(board);
                            board[v[0]][v[1]]="whiteknight1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhiteknight2exist(board)){
                        if(iscapturablebywhiteknight2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhiteknight2exist(board);
                            board[v[0]][v[1]]="whiteknight2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitebishop1exist(board)){
                        if(iscapturablebywhitebishop1(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitebishop1exist(board);
                            board[v[0]][v[1]]="whitebishop1";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitebishop2exist(board)){
                        if(iscapturablebywhitebishop2(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitebishop2exist(board);
                            board[v[0]][v[1]]="whitebishop2";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(doeswhitequeenexist(board)){
                        if(iscapturablebywhitequeen(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitequeenexist(board);
                            board[v[0]][v[1]]="whitequeen";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                        }
                    }
                    if(iscapturablebywhiteking(v[0],v[1],board)){
                            vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
                            board[v[0]][v[1]]="whiteking";
                            board[v2[0].first][v2[0].second]="E";
                            return;
                    }
                }
                v.clear();
}
void checksaverbywhite(vector<vector<string>>&board){
    vector<pair<int,int>>v=wheredoeswhitekingexist(board);
    int i=v[0].first;
    int j=v[0].second;
    if(ismovablekingwhite(i,j,board)){
        vector<pair<int,int>>v1=wherewhitekingcango(board);
        // Loop through choices and verify with boardtemp
        for(int k=0; k<v1.size(); k++){
            vector<vector<string>> boardtemp = board;
            boardtemp[i][j] = "E";
            boardtemp[v1[k].first][v1[k].second] = "whiteking";
            if(!ischeckbyblack(v1[k].first, v1[k].second, boardtemp)){
                board[i][j] = "E";
                board[v1[k].first][v1[k].second] = "whiteking";
                return;
            }
        }
    }
    if(cancheckbeblockedbywhite(board)){
        cancheckbeblockedbywhitesimulator(board);
        return;
    }
    return;
}

void checksaverbyblack(vector<vector<string>>&board){
    vector<pair<int,int>>v=wheredoesblackkingexist(board);
    int i=v[0].first;
    int j=v[0].second;
    if(ismovablekingblack(i,j,board)){
        vector<pair<int,int>>v1=whereblackkingcango(board);
        // Loop through choices and verify with boardtemp
        for(int k=0; k<v1.size(); k++){
            vector<vector<string>> boardtemp = board;
            boardtemp[i][j] = "E";
            boardtemp[v1[k].first][v1[k].second] = "blackking";
            if(!ischeckbywhite(v1[k].first, v1[k].second, boardtemp)){
                board[i][j] = "E";
                board[v1[k].first][v1[k].second] = "blackking";
                return;
            }
        }
    }
    if(cancheckbeblockedbyblack(board)){
        cancheckbeblockedbyblacksimulator(board);
        return;
    }
    return;
}
vector<vector<string>> chesssimulatorforwhite(vector<vector<string>>&board){
    vector<pair<int,int>>v1=wheredoeswhitekingexist(board);
    if(isstalematebywhite(v1[0].first,v1[0].second,board)){
        cout<<"STALEMATE ,WHITE CANNOT MOVE"<<endl;
        return board;
    }
    if(ischeckbyblack(v1[0].first,v1[0].second,board)){
        if(ischeckmatedbyblack(v1[0].first,v1[0].second,board)){
            cout<<"CHECKMATE BY BLACK,BLACK WINS"<<endl;
            return board;
        }
        else{
            checksaverbywhite(board);
            return board;
        }
    }
    if(doeswhiteknight1exist(board)){
        vector<pair<int,int>>v1=wheredoeswhiteknight1exist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhiteknight1cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whiteknight1";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whiteknight1";
                return board;
            }
        }
    }
    if(doeswhiteknight2exist(board)){
        vector<pair<int,int>>v1=wheredoeswhiteknight2exist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhiteknight2cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whiteknight2";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whiteknight2";
                return board;
            }
        }
    }
    if(doeswhitebishop1exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitebishop1exist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhitebishop1cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whitebishop1";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whitebishop1";
                return board;
            }
        }
    }
    if(doeswhitebishop2exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitebishop2exist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhitebishop2cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whitebishop2";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whitebishop2";
                return board;
            }
        }
    }
    if(doeswhiterook1exist(board)){
        vector<pair<int,int>>v1=wheredoeswhiterook1exist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhiterook1cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whiterook1";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whiterook1";
                return board;
            }
        }
    }
    if(doeswhiterook2exist(board)){
        vector<pair<int,int>>v1=wheredoeswhiterook2exist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhiterook2cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whiterook2";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whiterook2";
                return board;
            }
        }
    }
    if(doeswhitequeenexist(board)){
        vector<pair<int,int>>v1=wheredoeswhitequeenexist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhitequeencango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whitequeen";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whitequeen";
                return board;
            }
        }
    }
    if(doeswhitepawn1exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn1exist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhitepawn1cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whitepawn1";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whitepawn1";
                return board;
            }
        }
    }
    if(doeswhitepawn2exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn2exist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhitepawn2cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whitepawn2";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whitepawn2";
                return board;
            }
        }
    }
    if(doeswhitepawn3exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn3exist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhitepawn3cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whitepawn3";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whitepawn3";
                return board;
            }
        }
    }
    if(doeswhitepawn4exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn4exist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhitepawn4cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whitepawn4";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whitepawn4";
                return board;
            }
        }
    }
    if(doeswhitepawn5exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn5exist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhitepawn5cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whitepawn5";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whitepawn5";
                return board;
            }
        }
    }
    if(doeswhitepawn6exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn6exist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhitepawn6cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whitepawn6";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whitepawn6";
                return board;
            }
        }
    }
    if(doeswhitepawn7exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn7exist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhitepawn7cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whitepawn7";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whitepawn7";
                return board;
            }
        }
    }
    if(doeswhitepawn8exist(board)){
        vector<pair<int,int>>v1=wheredoeswhitepawn8exist(board);
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhitepawn8cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whitepawn8";
            if(!ischeckbyblack(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="whitepawn8";
                return board;
            }
        }
    }
        vector<pair<int,int>>v2=wheredoeswhitekingexist(board);
        vector<pair<int,int>>v3=wherewhitekingcango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v2[0].first][v2[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="whiteking";
            if(!ischeckbyblack(v3[i].first,v3[i].second,boardtemp)){
                board[v2[0].first][v2[0].second]="E";
                board[v3[i].first][v3[i].second]="whiteking";
                return board;
            }
        }
    return board;
}
vector<vector<string>> chesssimulatorforblack(vector<vector<string>>&board){
    vector<pair<int,int>>v1=wheredoesblackkingexist(board);
    if(isstalematebyblack(v1[0].first,v1[0].second,board)){
        cout<<"STALEMATE ,BLACK CANNOT MOVE"<<endl;
        return board;
    }
    if(ischeckbywhite(v1[0].first,v1[0].second,board)){
        if(ischeckmatedbywhite(v1[0].first,v1[0].second,board)){
            cout<<"CHECKMATE BY WHITE,WHITE WINS"<<endl;
            return board;
        }
        else{
            checksaverbyblack(board);
            return board;
        }
    }
    if(doesblackknight1exist(board)){
        vector<pair<int,int>>v1=wheredoesblackknight1exist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackknight1cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackknight1";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackknight1";
                return board;
            }
        }
    }
    if(doesblackknight2exist(board)){
        vector<pair<int,int>>v1=wheredoesblackknight2exist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackknight2cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackknight2";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackknight2";
                return board;
            }
        }
    }
    
    if(doesblackbishop1exist(board)){
        vector<pair<int,int>>v1=wheredoesblackbishop1exist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackbishop1cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackbishop1";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackbishop1";
                return board;
            }
        }
    }
    if(doesblackbishop2exist(board)){
        vector<pair<int,int>>v1=wheredoesblackbishop2exist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackbishop2cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackbishop2";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackbishop2";
                return board;
            }
        }
    }
    
    if(doesblackrook1exist(board)){
        vector<pair<int,int>>v1=wheredoesblackrook1exist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackrook1cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackrook1";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackrook1";
                return board;
            }
        }
    }
    if(doesblackrook2exist(board)){
        vector<pair<int,int>>v1=wheredoesblackrook2exist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackrook2cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackrook2";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackrook2";
                return board;
            }
        }
    }
    if(doesblackqueenexist(board)){
        vector<pair<int,int>>v1=wheredoesblackqueenexist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackqueencango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackqueen";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackqueen";
                return board;
            }
        }
    }
    if(doesblackpawn1exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn1exist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackpawn1cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackpawn1";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackpawn1";
                return board;
            }
        }
    }
    if(doesblackpawn2exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn2exist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackpawn2cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackpawn2";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackpawn2";
                return board;
            }
        }
    }
    if(doesblackpawn3exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn3exist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackpawn3cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackpawn3";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackpawn3";
                return board;
            }
        }
    }
    if(doesblackpawn4exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn4exist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackpawn4cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackpawn4";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackpawn4";
                return board;
            }
        }
    }
    if(doesblackpawn5exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn5exist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackpawn5cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackpawn5";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackpawn5";
                return board;
            }
        }
    }
    if(doesblackpawn6exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn6exist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackpawn6cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackpawn6";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackpawn6";
                return board;
            }
        }
    }
    if(doesblackpawn7exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn7exist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackpawn7cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackpawn7";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackpawn7";
                return board;
            }
        }
    }
    if(doesblackpawn8exist(board)){
        vector<pair<int,int>>v1=wheredoesblackpawn8exist(board);
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackpawn8cango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v1[0].first][v1[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackpawn8";
            if(!ischeckbywhite(v2[0].first,v2[0].second,boardtemp)){
                board[v1[0].first][v1[0].second]="E";
                board[v3[i].first][v3[i].second]="blackpawn8";
                return board;
            }
        }
    }
        vector<pair<int,int>>v2=wheredoesblackkingexist(board);
        vector<pair<int,int>>v3=whereblackkingcango(board);
        for(int i=0;i<v3.size();i++){
            vector<vector<string>>boardtemp=board;
            boardtemp[v2[0].first][v2[0].second]="E";
            boardtemp[v3[i].first][v3[i].second]="blackking";
            if(!ischeckbywhite(v3[i].first,v3[i].second,boardtemp)){
                board[v2[0].first][v2[0].second]="E";
                board[v3[i].first][v3[i].second]="blackking";
                return board;
            }
        }
    return board;
}
int main(){
    vector<vector<string>> board = {
    {"whiterook1", "whiteknight1", "whitebishop1", "whiteking", "whitequeen", "whitebishop2", "whiteknight2", "whiterook2"},
    {"whitepawn1", "whitepawn2", "whitepawn3", "whitepawn4", "whitepawn5", "whitepawn6", "whitepawn7", "whitepawn8"},
    {"E", "E", "E", "E", "E", "E", "E", "E"},
    {"E", "E", "E", "E", "E", "E", "E", "E"},
    {"E", "E", "E", "E", "E", "E", "E", "E"},
    {"E", "E", "E", "E", "E", "E", "E", "E"},
    {"blackpawn1", "blackpawn2", "blackpawn3", "blackpawn4", "blackpawn5", "blackpawn6", "blackpawn7", "blackpawn8"},
    {"blackrook1", "blackknight1", "blackbishop1", "blackking", "blackqueen", "blackbishop2", "blackknight2", "blackrook2"}
};


    board=chesssimulatorforwhite(board);
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
