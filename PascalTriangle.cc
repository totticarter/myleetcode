#include<iostream>
#include<vector>
using namespace std;


class Solution {

public:

    vector<int> getRow(int rowIndex) {

        vector<int> pre_rows(rowIndex+1);
        vector<int> return_rows(rowIndex+1);
        cout << "cur_rows size is: " << return_rows.size() << endl;

		if(rowIndex == 0){

			 return_rows[0] = 1;
			 return return_rows;
		}else if(rowIndex == 1){

			return_rows[0] = 1;
			return_rows[1] = 1;
			return return_rows;
		}else{

			pre_rows = getRow(rowIndex - 1);
			return_rows[0] = 1;
			for(int i = 1; i < rowIndex; i++){

				return_rows[i] = pre_rows[i-1] + pre_rows[i];
			}
			return_rows[rowIndex] = 1;
		}




//        for(int cur_row = 0; cur_row < rowIndex+1; cur_row++){
//
//            if(cur_row == 0){
//
//                 cur_rows[0] = 1;
//                 if(rowIndex == 0){
//
//                    return cur_rows;
//                 }else{
//
//                	 cur_rows.assign(rowIndex+1, 0);
//                 }
//
//            }else if(cur_row == 1){
//
//                cur_rows[0] = 1;
//                cur_rows[1] = 1;
//                pre_rows.assign(cur_rows.begin(), cur_rows.end());
//                if(rowIndex == 1){
//
//                    return cur_rows;
//                }else{
//
//                	cur_rows.assign(rowIndex+1, 0);
//                }
//            }else{
//
//            	pre_rows = getRow();
//                for(int i = 0; i < cur_row; i++){
//
//                	  pre_rows = getRow()
////                    if(i == 0){
////
////                        cur_rows[0] = 1;
////                        cur_rows[cur_row] = 1;
////                    }else{
////
////                        cur_rows[i] = pre_rows[i - 1] + pre_rows[i];
////                    }
//                }
//                cout << "cur_rows size is: " << cur_rows.size() << endl;
//                return cur_rows;
//            }
//        }
    }
};

int main(){

	Solution s;
	vector<int> v = s.getRow(4);
	cout << "v size is: " << v.size() << endl;
	vector<int>::iterator iter = v.begin();
	for(; iter != v.end(); iter++){

		cout << *iter << ", ";
	}
}
