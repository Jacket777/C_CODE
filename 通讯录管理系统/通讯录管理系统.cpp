#include<iostream>
#include<string>
using namespace std;
#define MAX 1000  //不需要加分号


//联系人结构体
struct Person {
	string m_Name;
	int m_Sex; //1表示男 2表示女
	int m_Age;
	string m_Phone;
	string m_Addr;
};



//通讯录结构体
struct Addressbooks {
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	int m_size; //当前通讯录中的人数
};

//1.添加联系人
void addPerson(Addressbooks* abs) {
	//判断通讯录是否满，满则不再添加
	if (abs->m_size == MAX) {
		cout << "通讯录已经满了，无法添加" << endl;
		return;
	}else {
		//添加联系人
		string name;
		cout << "请输入姓名: " << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_Name = name;
		//添加性别
		cout << "请输入性别，1表示男，2表示女" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_size].m_Sex = sex;
				break;
			}
			cout << "输入性别有误，请重新输入" << endl;
		}
		//添加年龄
		cout << "请输入年龄： " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_size].m_Age = age;
		//添加电话
		cout << "请输入联系电话: " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_size].m_Phone = phone;

		//添加住址
		cout << "请输入地址: " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_Addr = address;
		//更新通讯人数
		abs->m_size++;
		cout << "新增联系人成功" << endl;
		system("pause");//请按任意键继续
		system("cls");
	}
}


//2. 显示联系人
void showPerson(Addressbooks* abs) {
	//判断通讯录中人数是为0
	if (abs->m_size == 0) {
		cout << "当前记录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->m_size; i++) {
			cout << "姓名: " << abs->personArray[i].m_Name << "\t";
			cout << "性别: " <<(abs->personArray[i].m_Sex ==  1 ? "男":"女")<< "\t";
			cout << "年龄: " << abs->personArray[i].m_Age << "\t";
			cout << "电话: " << abs->personArray[i].m_Phone << "\t";
			cout << "地址: " << abs->personArray[i].m_Addr << endl;
		}
		system("pause");
		system("cls");
	}

}

//检测联系人是否存在，如果存在，返回联系人具体位置，不存在返回-1
int isExist(Addressbooks* abs, string name) {
	for (int i = 0; i < abs->m_size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}


//删除指定联系人
void deletePerson(Addressbooks* abs) {
	cout << "请输入要删除的联系人" << endl;
	string name;
	cin >> name;
	int res = isExist(abs, name);
	if (res != -1) {
		for (int i = res; i < abs->m_size; i++) {
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--; //更新人数
		cout << "删除成功" << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}


//查找联系人
void findPerson(Addressbooks* abs) {
	cout << "请输入要查找的联系人" << endl;
	string name;
	cin >> name;
	int res = isExist(abs, name);
	if (res != -1) {
		cout << "姓名: " << abs->personArray[res].m_Name << "\t";
		cout << "性别: " << (abs->personArray[res].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄: " << abs->personArray[res].m_Age << "\t";
		cout << "电话: " << abs->personArray[res].m_Phone << "\t";
		cout << "地址: " << abs->personArray[res].m_Addr << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");

}


//修改联系人的信息
void modifyPerson(Addressbooks* abs) {
	cout << "请输入要修改的联系人: " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);

	if (ret != -1) {
		string name;
		cout << "请输入修改后的姓名: " << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		cout << "请输入性别：1--男 2--女" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else {
				cout << "输入有误，请重新输入！" << endl;
			}
		}

		cout << "请输入年龄: " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//电话
		cout << "请输入联系电话" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

	

		//住址
		cout << "请输入住址" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "修改成功" << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");

}


//清空联系人
void cleanPerson(Addressbooks *abs) {
	abs->m_size = 0;//将当前记录联系人数量为0，做逻辑清空
	cout << "通讯录已经清空" << endl;
	system("pause");
	system("cls");
}





//封装函数显示界面 ---void showMenu()
void showMenu() {
	cout << "=============================================" << endl;
	cout << "*****\t"<<"1. 添加联系人\t" << "*****" << endl;
	cout << "*****\t" << "2. 显示联系人\t" << "*****" << endl;
	cout << "*****\t" << "3. 删除联系人\t" << "*****" << endl;
	cout << "*****\t" << "4. 查找联系人\t" << "*****" << endl;
	cout << "*****\t" << "5. 修改联系人\t" << "*****" << endl;
	cout << "*****\t" << "6. 清空联系人\t" << "*****" << endl;
	cout << "*****\t" << "0. 退出通讯录\t" << "*****" << endl;
	cout << "=============================================" << endl;
}

int main() {
	//创建通讯录结构体变量
	Addressbooks abs;
	abs.m_size = 0;


	int select = 0;//创建用户输入的变量

	while (true) {
		//菜单的调用
		showMenu();
		cin >> select;
		switch (select) {
		case 1:
			addPerson(&abs); //1.添加联系人，利用地址传递，可以修饰实参
			break;
		case 2:
			showPerson(&abs);
			break;
		case 3:
		//{
		//	cout << "请输入删除联系人的姓名: " << endl;
		//	string name;
		//	cin >> name;
		//	if (isExist(&abs, name) == -1) {
		//		cout << "查无此人" << endl;
		//	}
		//	else {
		//		cout << "找到该人" << endl;
		//	}
		//}
			deletePerson(&abs);
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			cleanPerson(&abs);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		}

	}


}

