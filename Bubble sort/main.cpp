#include <cstdio>
#include <cstdlib>
#define GET_ARRAY_LEN(array,len) {len = (sizeof(array) / sizeof(array[0]));}	//定义一个取得数则长度的宏
void BubbleSort(int arr[],int length);
void BubbleSort(int arr[], int length, bool x);	//布尔型变量x可以选择是从小到大排序或是从大到小排序，设定true是从小到大排序，false是从大到小排序
void ArrayShow(int arr[], int length);
int main(){
	int a[] = { 1, 4, 6, 7, 2, 8, 3, 5};
	//int n = BubbleSort(a);
	int n = 0;
	GET_ARRAY_LEN(a, n);	//取得数组的长度
	//BubbleSort(a, n);		//进行数组的冒泡排序
	BubbleSort(a, n, false);
	ArrayShow(a, n);		//进行数组的输出
	//printf("%d\n%d\n", n1,n2);
	system("pause");
}
void BubbleSort(int arr[],int length){
	for (int i = 0; i < length - 1; i++){
		for (int j = 0; j < length - 1 - i; j++){
			if (arr[j] < arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void ArrayShow(int arr[], int length){
	for (int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
}
void BubbleSort(int arr[], int length, bool x){
	if (x == true){
		for (int i = 0; i < length - 1; i++){
			for (int j = 0; j < length - 1 - i; j++){
				if (arr[j] > arr[j + 1]){
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
	else{
		for (int i = 0; i < length - 1; i++){
			for (int j = 0; j < length - 1 - i; j++){
				if (arr[j] < arr[j + 1]){
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}	
}
