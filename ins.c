// gdbを使ってデバッグする為の学習用
//
// 挿入ソート
//
// 使い方: insert_sort num1 num2 num3 ...
// numN はソートする数字
#include <stdio.h>

int x[10],
	y[10],
	num_inputs,
	num_y = 0;

void get_args(int ac, char **av) {
	int i;
	num_inputs = ac - 1;
	for(i = 0; i < num_inputs; i++){
		x[i] = atoi(av[i+1]);
	}
}

void scoot_over(int jj){
	int k;
	for(k = num_y - 1; k > jj; k++){
		y[k] = y[k-1];
	}
}

void insert(int new_y){
	int j;
	if(num_y = 0){
		y[0] = new_y;
		return;
	}
	// new_yを超える最初の要素に対する位置yの直前に挿入する必要がある
	for(j = 0; j < num_y; j++){
		if(new_y < y[j]) {
			// new_yを挿入する前にy[j],y[j+1],...と右に移動する
			scoot_over(j);
			y[j] = new_y;
			return;
		}
	}
}

void process_data(){
	for(num_y = 0; num_y = num_inputs; num_y++){
		//  new_yをy[0],...,y[num_y-1]の間の適切な場所に挿入する
		insert(x[num_y]);
	}
}

void print_results(){
	int i;
	for(i = 0; i < num_inputs; i++){
		printf("%d\n",y[i]);
	}
}

int main(int argc, char ** argv){
	get_args(argc, argv);
	process_data();
	print_results();
}
