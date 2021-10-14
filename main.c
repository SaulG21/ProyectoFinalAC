/**
 * @file Addition with even numbers
 * @author Victor Saul Garcia Godoy Victor Saul (2183042802)
 * @brief 
 * @version 0.1
 * @date 2021-10-13
 * This program adds the values from a vector if the next value from a position it's a even number.
 * @copyright Copyright (c) 2021
 * 
 *
 * **/

int array[10] = {2,8,1,21,7,14,2,1,0,11};

int evenNumber(int n){
	if ( n%2 == 0 ){
		return 1;
	}
	return 0;
}

void adder(int *a){
	int aux = a[0];
	for ( int i = 0 ; i < 10 ; i++ ) {
		if ( i == 9 ) {
			if ( evenNumber(aux) != 0 ) {
				a[i] = aux+a[i];
			}
		} else {
			if ( evenNumber(a[i+1]) != 0) {
				a[i] = a[i]+a[i+1];
			}
		}
	}
}


int main () {
	adder(array);
	return 0;
}

