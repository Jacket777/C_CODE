#include<iostream>
#include<string>
using namespace std;
#define MAX 1000  //����Ҫ�ӷֺ�


//��ϵ�˽ṹ��
struct Person {
	string m_Name;
	int m_Sex; //1��ʾ�� 2��ʾŮ
	int m_Age;
	string m_Phone;
	string m_Addr;
};



//ͨѶ¼�ṹ��
struct Addressbooks {
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	int m_size; //��ǰͨѶ¼�е�����
};

//1.�����ϵ��
void addPerson(Addressbooks* abs) {
	//�ж�ͨѶ¼�Ƿ��������������
	if (abs->m_size == MAX) {
		cout << "ͨѶ¼�Ѿ����ˣ��޷����" << endl;
		return;
	}else {
		//�����ϵ��
		string name;
		cout << "����������: " << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_Name = name;
		//����Ա�
		cout << "�������Ա�1��ʾ�У�2��ʾŮ" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_size].m_Sex = sex;
				break;
			}
			cout << "�����Ա���������������" << endl;
		}
		//�������
		cout << "���������䣺 " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_size].m_Age = age;
		//��ӵ绰
		cout << "��������ϵ�绰: " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_size].m_Phone = phone;

		//���סַ
		cout << "�������ַ: " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_Addr = address;
		//����ͨѶ����
		abs->m_size++;
		cout << "������ϵ�˳ɹ�" << endl;
		system("pause");//�밴���������
		system("cls");
	}
}


//2. ��ʾ��ϵ��
void showPerson(Addressbooks* abs) {
	//�ж�ͨѶ¼��������Ϊ0
	if (abs->m_size == 0) {
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < abs->m_size; i++) {
			cout << "����: " << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�: " <<(abs->personArray[i].m_Sex ==  1 ? "��":"Ů")<< "\t";
			cout << "����: " << abs->personArray[i].m_Age << "\t";
			cout << "�绰: " << abs->personArray[i].m_Phone << "\t";
			cout << "��ַ: " << abs->personArray[i].m_Addr << endl;
		}
		system("pause");
		system("cls");
	}

}

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�˾���λ�ã������ڷ���-1
int isExist(Addressbooks* abs, string name) {
	for (int i = 0; i < abs->m_size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}


//ɾ��ָ����ϵ��
void deletePerson(Addressbooks* abs) {
	cout << "������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	int res = isExist(abs, name);
	if (res != -1) {
		for (int i = res; i < abs->m_size; i++) {
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--; //��������
		cout << "ɾ���ɹ�" << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}


//������ϵ��
void findPerson(Addressbooks* abs) {
	cout << "������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	int res = isExist(abs, name);
	if (res != -1) {
		cout << "����: " << abs->personArray[res].m_Name << "\t";
		cout << "�Ա�: " << (abs->personArray[res].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "����: " << abs->personArray[res].m_Age << "\t";
		cout << "�绰: " << abs->personArray[res].m_Phone << "\t";
		cout << "��ַ: " << abs->personArray[res].m_Addr << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");

}


//�޸���ϵ�˵���Ϣ
void modifyPerson(Addressbooks* abs) {
	cout << "������Ҫ�޸ĵ���ϵ��: " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);

	if (ret != -1) {
		string name;
		cout << "�������޸ĺ������: " << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		cout << "�������Ա�1--�� 2--Ů" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else {
				cout << "�����������������룡" << endl;
			}
		}

		cout << "����������: " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//�绰
		cout << "��������ϵ�绰" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

	

		//סַ
		cout << "������סַ" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "�޸ĳɹ�" << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");

}


//�����ϵ��
void cleanPerson(Addressbooks *abs) {
	abs->m_size = 0;//����ǰ��¼��ϵ������Ϊ0�����߼����
	cout << "ͨѶ¼�Ѿ����" << endl;
	system("pause");
	system("cls");
}





//��װ������ʾ���� ---void showMenu()
void showMenu() {
	cout << "=============================================" << endl;
	cout << "*****\t"<<"1. �����ϵ��\t" << "*****" << endl;
	cout << "*****\t" << "2. ��ʾ��ϵ��\t" << "*****" << endl;
	cout << "*****\t" << "3. ɾ����ϵ��\t" << "*****" << endl;
	cout << "*****\t" << "4. ������ϵ��\t" << "*****" << endl;
	cout << "*****\t" << "5. �޸���ϵ��\t" << "*****" << endl;
	cout << "*****\t" << "6. �����ϵ��\t" << "*****" << endl;
	cout << "*****\t" << "0. �˳�ͨѶ¼\t" << "*****" << endl;
	cout << "=============================================" << endl;
}

int main() {
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	abs.m_size = 0;


	int select = 0;//�����û�����ı���

	while (true) {
		//�˵��ĵ���
		showMenu();
		cin >> select;
		switch (select) {
		case 1:
			addPerson(&abs); //1.�����ϵ�ˣ����õ�ַ���ݣ���������ʵ��
			break;
		case 2:
			showPerson(&abs);
			break;
		case 3:
		//{
		//	cout << "������ɾ����ϵ�˵�����: " << endl;
		//	string name;
		//	cin >> name;
		//	if (isExist(&abs, name) == -1) {
		//		cout << "���޴���" << endl;
		//	}
		//	else {
		//		cout << "�ҵ�����" << endl;
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
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		}

	}


}

