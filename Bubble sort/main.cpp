#include <cstdio>
#include <cstdlib>
#define GET_ARRAY_LEN(array,len) {len = (sizeof(array) / sizeof(array[0]));}	//����һ��ȡ�����򳤶ȵĺ�
void BubbleSort(int arr[],int length);
void BubbleSort(int arr[], int length, bool x);	//�����ͱ���x����ѡ���Ǵ�С����������ǴӴ�С�����趨true�Ǵ�С��������false�ǴӴ�С����
void ArrayShow(int arr[], int length);
int main(){
	int a[] = { 1, 4, 6, 7, 2, 8, 3, 5};
	//int n = BubbleSort(a);
	int n = 0;
	GET_ARRAY_LEN(a, n);	//ȡ������ĳ���
	//BubbleSort(a, n);		//���������ð������
	BubbleSort(a, n, false);
	ArrayShow(a, n);		//������������
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
