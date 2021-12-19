#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
int main(){
	int h,f=0,p,ih=5,ie=5,nh=1,ne=2;
	char c, c1;
	while(1){
			cout<<"1.play with bot\n2.play vs mode\n";
	while(1){
		cin>>f;
    if(f==1||2)
    break;
    else	
    cout<<"\nplease choose the possible choices\n";
}
	if(f==1){
				cout<<"1.easy\n2.hard\n";
	while(1){
		cin>>h;
    if(h==1||2)
    	break;
    else	
    cout<<"\nplease choose the possible choices\n";
}
	if(h==1){
		system("cls");
	cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/|\\\t/|\\\n"<<"/ \\\t/ \\\n\n";
	cout<<"press p to punch, press k to kick"<<"\npress d to defense punch, press s to defense kick\n";
	while(ih!=0&&ie!=0){
		c=getch();
		if(c=='p'){
			while(1){
			if(nh>ne){
				cout<<"please press d or s\n";
				break;	
			}		
			else{
				p=rand () %5;
				if(p==0||1||2){
			ie--;
			nh*=4;
				system("cls");
						cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/|--";
						cout<<"\t/|\\\n"<<"/ \\\t| \\\n\n";
			break;
			}
			else{
					system("cls");
				cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/|--";
				cout<<"\t||\\\n"<<"/ \\\t/ \\\n\n";
			nh*=4;
			break;
			}	
			}
		}
	}
	
		else if(c=='k'){
			while(1){
			if(nh>ne){
				cout<<"please press d or s\n";
				break;	
			}		
			else{
				p=rand () %5;
				if(p==0||1||2){
			ie--;
			nh*=4;
				system("cls");
						cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/|\\";
							cout<<"\t/|\\\n"<<"/ --\t| \\\n\n";
			break;
			}
			else{
					system("cls");
				cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/|\\";
				cout<<"\t/|\\\n"<<"/ --\t/ \\\n\n";
			nh*=4;
			break;
			}	
			}
		}
	}
	
		else if(c=='d'){
			while(1){
			if(ne>nh){
				cout<<"please press p or k\n";
				break;	
			}		
			else{
				p=rand () %5;
				if(p==0||1){
						system("cls");
					cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/||";
				cout<<"    --|\\\n"<<"/ \\\t/ \\\n\n";
			ne*=4;
			break;
			}
			else{
			ne*=4;
			ih--;
				system("cls");
			cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/||";
				cout<<"\t/|\\\n"<<"/ \\   -- \\\n\n";
			break;
			}	
			}
		}
	}
	
		else if(c=='s'){
			while(1){
			if(ne>nh){
				cout<<"please press p or k\n";
				break;	
			}		
			else{
				p=rand () %5;
				if(p==0||1||2){
						system("cls");
								cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/|\\";
				cout<<"\t/|\\\n"<<"/ |\t-- \\\n\n";
			ne*=4;
			break;
			}
			else{
			ne*=4;
			ih--;
				system("cls");
						cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/|\\";
							cout<<"\t/|\\\n"<<"/ \\\t-- \\\n\n";
			break;
			}	
			}
		}
	}
	
	else{
		cout<<"\nenter the defined buttons!\n";
	}
	if(ih==0){
		cout<<"you lose\n\n";
		cout<<"\\ \\\n -- #\thero\n/ /\n\n";
	}
		else if(ie==0)	{
		cout<<"\nyou win\n\n";
		cout<<"\\ \\\n -- #\tenemy\n/ /\n\n";
	}
	}
}
ih=5;
ie=5;
if(h==2){
		system("cls");
	cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/|\\\t/|\\\n"<<"/ \\\t/ \\\n\n";
	cout<<"press p to punch, press k to kick"<<"\npress d to defense punch, press s to defense kick\n";
	while(ih!=0&&ie!=0){
		c=getch();
		if(c=='p'){
			while(1){
			if(nh>ne){
				cout<<"please press d or s\n";
				break;	
			}		
			else{
				p=rand () %5;
				if(p==4){
			ie--;
			nh*=4;
				system("cls");
						cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/|--";
						cout<<"\t/|\\\n"<<"/ \\\t| \\\n\n";
			break;
			}
			else{
					system("cls");
				cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/|--";
				cout<<"\t||\\\n"<<"/ \\\t/ \\\n\n";
			nh*=4;
			break;
			}	
			}
		}
	}
	
		else if(c=='k'){
			while(1){
			if(nh>ne){
				cout<<"please press d or s\n";
				break;	
			}		
			else{
				p=rand () %5;
				if(p==4){
			ie--;
			nh*=4;
				system("cls");
						cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/|\\";
							cout<<"\t||\\\n"<<"/ --\t/ \\\n\n";
			break;
			}
			else{
					system("cls");
				cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/|\\";
				cout<<"\t/|\\\n"<<"/ --\t| \\\n\n";
			nh*=4;
			break;
			}	
			}
		}
	}
	
		else if(c=='d'){
			while(1){
			if(ne>nh){
				cout<<"please press p or k\n";
				break;	
			}		
			else{
				p=rand () %5;
				if(p==4){
						system("cls");
					cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/||";
				cout<<"    --|\\\n"<<"/ \\\t/ \\\n\n";
			ne*=4;
			break;
			}
			else{
			ne*=4;
			ih--;
				system("cls");
			cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/||";
				cout<<"\t/|\\\n"<<"/ \\    -- \\\n\n";
			break;
			}	
			}
		}
	}
	
		else if(c=='s'){
			while(1){
			if(ne>nh){
				cout<<"please press p or k\n";
				break;	
			}		
			else{
				p=rand () %5;
				if(p==4){
						system("cls");
								cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/|\\";
				cout<<"\t/|\\\n"<<"/ |    -- \\\n\n";
			ne*=4;
			break;
			}
			else{
			ne*=4;
			ih--;
						cout<<"hero="<<ih<<"\tenemy="<<ie<<"\n"<<" #\t #\n"<<"/|\\";
							cout<<"    --|\\\n"<<"/ |\t/ \\\n\n";
			break;
			}	
			}
		}
	}
	
	else{
		cout<<"\nenter the defined buttons!\n";
	}
	if(ih==0){
		cout<<"you lose\n\n";
		cout<<"\\ \\\n -- #\thero\n/ /\n\n";
	}
		else if(ie==0){
		cout<<"\nyou win\n\n";
		cout<<"\\ \\\n -- #\tenemy\n/ /\n\n";
    }
	}

}
ih=5;
ie=5;
}
if(f==2){
		system("cls");
	cout<<"player1="<<ih<<"\tplayer2="<<ie<<"\n"<<" #\t\t #\n"<<"/|\\\t\t/|\\\n"<<"/ \\\t\t/ \\\n\n";
	cout<<"press p to punch, press k to kick"<<"\npress d to defense punch, press s to defense kick\n";
	while(ih!=0&&ie!=0){
		c=getch();
		if(c=='p'){
			while(1){
			if(nh>ne){
				cout<<"please press d or s\n";
				break;	
			}		
			else{
				c1=getch();
				if(c1=='s'){
			ie--;
			nh*=4;
				system("cls");
						cout<<"player1="<<ih<<"\t\tplayer2="<<ie<<"\n"<<" #\t\t #\n"<<"/|--";
						cout<<"\t\t/|\\\n"<<"/ \\\t\t| \\\n\n";
			break;
			}
			else if(c1=='d'){
					system("cls");
				cout<<"player1="<<ih<<"\tplayer2="<<ie<<"\n"<<" #\t\t #\n"<<"/|--";
				cout<<"\t\t||\\\n"<<"/ \\\t\t/ \\\n\n";
			nh*=4;
			break;
			}	
			}
		}
	}
	
		else if(c=='k'){
			while(1){
			if(nh>ne){
				cout<<"please press d or s\n";
				break;	
			}		
			else{
				c1=getch();
				if(c1=='d'){
			ie--;
			nh*=4;
				system("cls");
						cout<<"player1="<<ih<<"\t\tplayer2="<<ie<<"\n"<<" #\t\t #\n"<<"/|\\";
							cout<<"\t\t||\\\n"<<"/ --\t\t/ \\\n\n";
			break;
			}
			else if(c1=='s'){
					system("cls");
				cout<<"player1="<<ih<<"\t\tplayer2="<<ie<<"\n"<<" #\t\t #\n"<<"/|\\";
				cout<<"\t\t/|\\\n"<<"/ --\t\t| \\\n\n";
			nh*=4;
			break;
			}	
			}
		}
	}
	
		else if(c=='d'){
			while(1){
			if(ne>nh){
				cout<<"please press p or k\n";
				break;	
			}		
			else{
				c1=getch();
				if(c1=='p'){
						system("cls");
					cout<<"player1="<<ih<<"\t\tplayer2="<<ie<<"\n"<<" #\t\t #\n"<<"/||";
				cout<<"\t       --|\\\n"<<"/ \\\t\t/ \\\n\n";
			ne*=4;
			break;
			}
			else if(c1=='k'){
			ne*=4;
			ih--;
				system("cls");
			cout<<"player1="<<ih<<"\t\tplayer2="<<ie<<"\n"<<" #\t\t #\n"<<"/||";
				cout<<"\t\t/|\\\n"<<"/ \\\t       -- \\\n\n";
			break;
			}	
			}
		}
	}
	
		else if(c=='s'){
			while(1){
			if(ne>nh){
				cout<<"please press p or k\n";
				break;	
			}		
			else{
				c1=getch();
				if(c1=='k'){
						system("cls");
								cout<<"player1="<<ih<<"\t\tplayer2="<<ie<<"\n"<<" #\t\t #\n"<<"/|\\";
				cout<<"\t\t/|\\\n"<<"/ |\t       -- \\\n\n";
			ne*=4;
			break;
			}
			else if(c1=='p'){
			ne*=4;
			ih--;
				system("cls");
						cout<<"player1="<<ih<<"\t\tplayer2="<<ie<<"\n"<<" #\t\t #\n"<<"/|\\";
							cout<<"\t       --|\\\n"<<"/ |\t\t/ \\\n\n";
			break;
			}	
			}
		}
	}
	
	else{
		cout<<"\nenter the defined buttons!\n";
	}
		if(ih==0){
		cout<<"player2 win\n\n";
		cout<<"\\ \\\n -- #\tplayer1\n/ /\n\n";
	}
		else if(ie==0){
		cout<<"\nplayer1 win\n\n";
		cout<<"\\ \\\n -- #\tplayer2\n/ /\n\n";
	}
	}
}
ih=5;
ie=5;
}



 return 0;

}









