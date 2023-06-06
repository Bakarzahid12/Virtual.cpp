#include<iostream>
using namespace std;

class Garment{
	private:
		char name;
	public:
		virtual calculatePrice() = 0;
};

class upper{
	private:
		int collarSize;
	public:
		virtual getCollarSize() = 0;
};
class Lower : public Garment{
	protected:
		int waist;
	public:
		virtual getWaist() = 0;
};
class Shirt : public upper{
		public:
			void getCollarSize() = 0;
	 	 	{
	 	 		cout<<"Enter Colar Size: " << endl;
	 	 		cin>>collarsize;
			}
			int calculatePrice()
			{
				int shirtprice = collarsize*20+10;
				return shirtprice;
			}
};
class Pajama : public lower() {
	void getWaist(){
		cout<<"Enter the waist: " << endl;
		cin>>waist;
		}
		
		int calculatePrice(){
			int Pajamaprice = waist*15+50;
			return Pajamaprice;
		}
};
class Trouser : public lower(){
	void getWaist(){
		cout<<"Enter the waist " << endl;
		cin>>waist;
		
	int calculatePrice(){
		int trouserprice = waist*20+100;
		return trouserprice;
	}
};
int main() {
	
}