/* Add your name here */
    
#include <iostream>
#include <cstdlib>  // contains the rand() and srand() function 
#include <ctime>    // time() function
using namespace std;

void playGame();
int main()
{
    
    char begin;

    
    srand(time(0)); // initialize random seed generator to current time: 
					// needed to generate a different sequence of random numbers
					// efor (int i = 0; i < 10; i ++)
        
    do{
        cout<<"Would you like to continue?"<<endl;
        cout<<"((Y)es or (N)o):";
        cin>>begin;
        if(begin=='y'||begin=='Y'|| begin!='n'||begin=='N'){
            if(begin=='y'||begin=='Y'){
                playGame();
            }
            else{
                cout<<"You somehow messed that up so lets try again."<<endl;
            }
        }
 

        
    }while(begin!='n'||begin=='N');
}
    
    void playGame(){
        int rolls=0;
        int ans;
        int ans2;
        int real;
        int point=0;
        for(int i=0;i<=7;i++){
        
          rolls++;
          ans=rand()%6+1;
          ans2=rand()%6+1;

          
          cout <<"Round "<< rolls << " Results"<<endl;
          cout << ans << '\t'<<ans2<<endl;
          real=ans+ans2;
          if(real==point){
            cout<<"FINE YOU WIN"<<endl;
            break;
          }
          if(rolls==1){

            point=real;
          }

          if(real==2||real==3||real==12||rolls==7){
              cout<<"you lose"<<endl; 
              break;
          }
           else if(real==7||real==11){
                
                cout<<"FINE YOU WIN"<<endl;
                break;
            }
            

        }
    }
    // Add your code to play the dice game here




