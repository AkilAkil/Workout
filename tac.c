#include<stdio.h>
#include<string.h>

char in[20]="x=(a+b)+(c+d)/e"; //Input String
char po[10];int p=-1;  //Postfix String

//Stack Components
char stack[10];
int top=-1;

//Simple Stack push
void push(char k){
	stack[++top]=k;
}

//Simple stack push
char pop(){
	char t = stack[top];	//Just use "return (stack[top--]);"
	stack[top--]=' ';		  
	return t;				
}

//Finding the Precedence of the operator
int pre(char k){
	switch(k){
		case '#':			//Just dummy
			return 0;	
		case '(':			
			return 1;
		case '+':			//Low precedence
		case '-':
			return 2;
		case '*':			//Hign Precedence
		case '\\':
			return 3;
	}
}

int main(){
	int i,var,temp=0;				
	char ve,t,tstat[10],tc='0';
	printf("Input : %s",in);
	
	i=2;								//Starting scan after '=' 
	push('#');							//Pushing '#' as dummy
	while(in[i]!='\0'){					//Scaning until '\0' null character
		
		//printf("\nc = %c",in[i]);
		
		if(in[i]>=97&&in[i]<=122) {		//Checking for alphabets 'a=97 z=122'
			po[++p]=in[i];				//Copy to postfix string
		}
		else if(in[i]=='('){			//Open bracket
			push(in[i]);				//Push to stack
		}
		else if(in[i]==')'){			//Close Bracket
			while(stack[top]!='('){		//Pop until '('
				po[++p]=pop();
			}	
			ve=pop();					//Pop the '('
		}
		else{
			if(pre(stack[top])>=pre(in[i])){	//If top operator has greater precedence , copy to the postfix
				po[++p]=pop();					//using pop()
			}
			push(in[i]);				//Push the operator
			
		}
		printf("\nStack : %s",stack);	//Print Stack in each iteration    \\  Just to see
		printf("\nPostfix : %s",po);	//Print postfix in each iteration  //
		printf("\n");
		i++;
	}
	
	while(top!=0){						//Copy remaining operator to postfix
		po[++p]=pop();
	}
	
	ve=pop();							//Remove '#' from stack
				
	printf("\nPostfix : %s",po);		//Print Postfix 
	i=0;								//Now start scaning
	while(po[i]!='\0'){					
		//printf("\nState : %s",stack);
		if(po[i]>=97&&po[i]<=122){		//If operand push to stack
			push(po[i]);				
		}
		else{
			printf("\nt%d = %c %c %c",temp++,pop(),po[i],pop());	//If operator pop the last two operands
			push(tc++);												//Push temp char (i.e..) '0'
		}
		i++;
	}
	printf("\n%c = t%d ",in[0],temp-1);		//Assign last temp var to the assignment variable
	
	//printf("\nStack : %s",stack);
	
	
	//printf("\n\na:%d\tz:%d\tA:%d\tZ:%d",'a','z','A','Z');

}
