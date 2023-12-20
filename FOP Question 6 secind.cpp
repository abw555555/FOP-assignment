#include <iostream>
using namespace std;

int main() {
	int progtype;
	double chord, maxcamber, posmaxcamber, thickness;
	int first=0, second=0, thirdfourth, third;
	string NACAcode;
	
	cout<<"This programs tells the NACA 4 digit series of the profile of an airfoil of a wing.\n";
	cout<<"If you already know the four digit series of the airfoil, the program can give you some details about the airfoil. \n";
	cout<<"Press 1 if you would like to know the NACA 4 digit series for your airfoil shape and 2 if you already know it and would like some details on the airfoil! \n";
	
	cin>>progtype;
	
	if (progtype==1){
		
		cout<<endl;
		cout<<"The NACA four-digit wing sections define the profile by:\n\n";
		cout<<"First digit describing maximum camber as percentage of the chord.\n";
		cout<<"Second digit describing the distance of maximum camber from the airfoil leading edge in tenths of the chord.\n";
		cout<<"Last two digits describing maximum thickness of the airfoil as percent of the chord.\n";	
		
		cout<<"Input the chord length of the airfoil in meters.\n";
		cin>>chord;
		
		cout<<"Input the maximum camber of the airfoil in meters.\n";
		cin>>maxcamber;
		
		cout<<"Input the distance of the maximum camber from the leading edge of the airfoil in meters.\n";
		cin>>posmaxcamber;
		
		cout<<"Input the maximum thickness of your airfoil in meters.\n";
		cin>>thickness;
		
		first=(maxcamber/chord)*100;
		second=(posmaxcamber/chord)*10;
		thirdfourth=(thickness/chord)*100;
		
		cout<<"The NACA 4 digit series of your airfoil woulf be: NACA"<<first<<second<<thirdfourth<<"."<<endl;
	}
	
	else if (progtype == 2){
		cout<<"Enter the 4 digit series of your airfoil.\n";
		cin>>NACAcode;
		
		for (int i=0; i<4; i++) {
			
			if (i==0){
				first=NACAcode[i];
				cout<<"The maximum camber is "<<first<<" % of the chord of your airfoil.\n";
				if (first==0){
					cout<<"Your airfoil is symmetrical. It has zero camber";
				}	
			}
			
			if (i==1){
				second=NACAcode[i];
				cout<<"The distance of maximum camber from the leading edge in tenths of the chord is "<<second<<".\n";	
			}	
			
			if (i==2){
				third=(NACAcode[i])*10;	
			}	
			
			if (i==3){
				third+=NACAcode[i];
				cout<<"The maximum thickness of your airfoil is "<<third<<" % of the chord.\n";	
			}	
		}
		
	}
	
	else {
	cout<< "Rerun the program and choose either 1 or 2.";
	}

return 0;
}
