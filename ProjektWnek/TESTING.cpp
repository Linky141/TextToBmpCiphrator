//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif
//
//#include <iostream>
//
//#include "EncryptEngine.h"
//
//
//
//int main(void)
//{
//	EncryptEngine encrypt;
//	std::string tekst;
//	int chose;
//	while (true)
//	{
//		chose = 0;
//		system("cls");
//		printf("1 - a\n2 - Siemanko aaaaaaaaaaa\n3 - lorem short\n4 - lorem long\n\n>>");
//		scanf("%d", &chose);
//		switch (chose)
//		{
//		case(1):
//			tekst = "a";
//			break;
//		case(2):
//			tekst = "Siemanko aaaaaaaaaaa";
//			break;
//		case(3):
//			tekst = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi commodo quis tellus id pulvinar. Mauris quis libero dignissim, iaculis elit id, congue nisi. Morbi tristique efficitur dui, placerat molestie elit fringilla id. Suspendisse blandit lorem sed ipsum condimentum congue. Nullam aliquet quis libero eu rutrum. Cras sed purus in metus suscipit aliquet. Praesent non vestibulum purus, a dignissim augue. Nam id tortor nisi. Curabitur eleifend vulputate mauris, eleifend suscipit ante efficitur vel.Quisque sollicitudin dolor nec fringilla pellentesque.Aliquam erat volutpat.Nunc at placerat urna.Mauris fringilla sem turpis, sed feugiat lectus ullamcorper non.Etiam at libero at orci sagittis facilisis.Aliquam erat volutpat.Vestibulum in consectetur libero.Donec metus quam, efficitur eu finibus quis, iaculis in quam.Nam imperdiet, elit eget mollis semper, arcu arcu faucibus tortor, eget rhoncus nisi nisl id mauris.Fusce rutrum risus vel dapibus venenatis.Praesent nisi magna, pretium sed facilisis id, placerat vitae augue.Integer dictum arcu non mi gravida fringilla.Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos.Duis ut tortor sem.Nullam tristique enim malesuada tellus egestas, eget iaculis urna eleifend. Vivamus vehicula ex sapien, at rutrum dui posuere nec.Suspendisse in libero elementum, pretium enim a, elementum ipsum.Duis venenatis tempus augue, a ultrices lacus viverra in.Nunc mattis malesuada sem, a aliquam eros tempus eget.Donec sit amet nisl elementum, porttitor tortor a, blandit ligula.Maecenas mollis varius nibh eu malesuada.Sed ac erat ac est pulvinar facilisis.Fusce vitae odio ac tortor lobortis convallis.Morbi ultrices in nisi et dapibus.Quisque condimentum, diam vitae suscipit lobortis, velit mauris iaculis nunc, eget condimentum nisl ante quis quam.Vivamus purus magna, vulputate quis arcu non, ultrices tristique mauris.Aenean eget elit vitae enim posuere blandit sit amet at metus.Nulla vel fermentum lorem.Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.Suspendisse nec massa auctor, facilisis ex a, lacinia massa. Pellentesque a rutrum libero.Pellentesque sagittis vel nibh at tempor.Praesent euismod euismod leo, sodales vehicula sapien condimentum quis.Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.Duis gravida non nisl placerat blandit.Donec eu ante facilisis, efficitur risus quis, sollicitudin libero.Aliquam erat volutpat.Fusce ac ex nec risus volutpat volutpat at vitae turpis.Pellentesque rhoncus, felis lobortis convallis ullamcorper, sapien velit viverra arcu, vel pretium quam purus id leo.Curabitur tempus tempus magna, vel ornare mauris malesuada ut.Mauris vitae neque ligula.Quisque vel fringilla tortor.Aenean nec eros porttitor, rutrum ligula sit amet, imperdiet nisi. Vivamus pulvinar tempor elit, sed pharetra urna ornare eget.Nunc sit amet nisi sit amet elit vestibulum egestas eget in orci.Suspendisse sit amet risus placerat, dapibus libero ultrices, aliquam mauris.Praesent porta convallis rhoncus.Nunc sit amet mollis nisl, non consectetur erat.Quisque vulputate ornare nunc sed rutrum.Donec elementum lorem ut ultrices pellentesque.Donec at varius purus, vel porta sem.";
//			break;
//		case(4):
//			tekst = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi commodo quis tellus id pulvinar. Mauris quis libero dignissim, iaculis elit id, congue nisi. Morbi tristique efficitur dui, placerat molestie elit fringilla id. Suspendisse blandit lorem sed ipsum condimentum congue. Nullam aliquet quis libero eu rutrum. Cras sed purus in metus suscipit aliquet. Praesent non vestibulum purus, a dignissim augue. Nam id tortor nisi. Curabitur eleifend vulputate mauris, eleifend suscipit ante efficitur vel.Quisque sollicitudin dolor nec fringilla pellentesque.Aliquam erat volutpat.Nunc at placerat urna.Mauris fringilla sem turpis, sed feugiat lectus ullamcorper non.Etiam at libero at orci sagittis facilisis.Aliquam erat volutpat.Vestibulum in consectetur libero.Donec metus quam, efficitur eu finibus quis, iaculis in quam.Nam imperdiet, elit eget mollis semper, arcu arcu faucibus tortor, eget rhoncus nisi nisl id mauris.Fusce rutrum risus vel dapibus venenatis.Praesent nisi magna, pretium sed facilisis id, placerat vitae augue.Integer dictum arcu non mi gravida fringilla.Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos.Duis ut tortor sem.Nullam tristique enim malesuada tellus egestas, eget iaculis urna eleifend. Vivamus vehicula ex sapien, at rutrum dui posuere nec.Suspendisse in libero elementum, pretium enim a, elementum ipsum.Duis venenatis tempus augue, a ultrices lacus viverra in.Nunc mattis malesuada sem, a aliquam eros tempus eget.Donec sit amet nisl elementum, porttitor tortor a, blandit ligula.Maecenas mollis varius nibh eu malesuada.Sed ac erat ac est pulvinar facilisis.Fusce vitae odio ac tortor lobortis convallis.Morbi ultrices in nisi et dapibus.Quisque condimentum, diam vitae suscipit lobortis, velit mauris iaculis nunc, eget condimentum nisl ante quis quam.Vivamus purus magna, vulputate quis arcu non, ultrices tristique mauris.Aenean eget elit vitae enim posuere blandit sit amet at metus.Nulla vel fermentum lorem.Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.Suspendisse nec massa auctor, facilisis ex a, lacinia massa. Pellentesque a rutrum libero.Pellentesque sagittis vel nibh at tempor.Praesent euismod euismod leo, sodales vehicula sapien condimentum quis.Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.Duis gravida non nisl placerat blandit.Donec eu ante facilisis, efficitur risus quis, sollicitudin libero.Aliquam erat volutpat.Fusce ac ex nec risus volutpat volutpat at vitae turpis.Pellentesque rhoncus, felis lobortis convallis ullamcorper, sapien velit viverra arcu, vel pretium quam purus id leo.Curabitur tempus tempus magna, vel ornare mauris malesuada ut.Mauris vitae neque ligula.Quisque vel fringilla tortor.Aenean nec eros porttitor, rutrum ligula sit amet, imperdiet nisi. Vivamus pulvinar tempor elit, sed pharetra urna ornare eget.Nunc sit amet nisi sit amet elit vestibulum egestas eget in orci.Suspendisse sit amet risus placerat, dapibus libero ultrices, aliquam mauris.Praesent porta convallis rhoncus.Nunc sit amet mollis nisl, non consectetur erat.Quisque vulputate ornare nunc sed rutrum.Donec elementum lorem ut ultrices pellentesque.Donec at varius purus, vel porta sem.Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi commodo quis tellus id pulvinar. Mauris quis libero dignissim, iaculis elit id, congue nisi. Morbi tristique efficitur dui, placerat molestie elit fringilla id. Suspendisse blandit lorem sed ipsum condimentum congue. Nullam aliquet quis libero eu rutrum. Cras sed purus in metus suscipit aliquet. Praesent non vestibulum purus, a dignissim augue. Nam id tortor nisi. Curabitur eleifend vulputate mauris, eleifend suscipit ante efficitur vel.Quisque sollicitudin dolor nec fringilla pellentesque.Aliquam erat volutpat.Nunc at placerat urna.Mauris fringilla sem turpis, sed feugiat lectus ullamcorper non.Etiam at libero at orci sagittis facilisis.Aliquam erat volutpat.Vestibulum in consectetur libero.Donec metus quam, efficitur eu finibus quis, iaculis in quam.Nam imperdiet, elit eget mollis semper, arcu arcu faucibus tortor, eget rhoncus nisi nisl id mauris.Fusce rutrum risus vel dapibus venenatis.Praesent nisi magna, pretium sed facilisis id, placerat vitae augue.Integer dictum arcu non mi gravida fringilla.Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos.Duis ut tortor sem.Nullam tristique enim malesuada tellus egestas, eget iaculis urna eleifend. Vivamus vehicula ex sapien, at rutrum dui posuere nec.Suspendisse in libero elementum, pretium enim a, elementum ipsum.Duis venenatis tempus augue, a ultrices lacus viverra in.Nunc mattis malesuada sem, a aliquam eros tempus eget.Donec sit amet nisl elementum, porttitor tortor a, blandit ligula.Maecenas mollis varius nibh eu malesuada.Sed ac erat ac est pulvinar facilisis.Fusce vitae odio ac tortor lobortis convallis.Morbi ultrices in nisi et dapibus.Quisque condimentum, diam vitae suscipit lobortis, velit mauris iaculis nunc, eget condimentum nisl ante quis quam.Vivamus purus magna, vulputate quis arcu non, ultrices tristique mauris.Aenean eget elit vitae enim posuere blandit sit amet at metus.Nulla vel fermentum lorem.Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.Suspendisse nec massa auctor, facilisis ex a, lacinia massa. Pellentesque a rutrum libero.Pellentesque sagittis vel nibh at tempor.Praesent euismod euismod leo, sodales vehicula sapien condimentum quis.Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.Duis gravida non nisl placerat blandit.Donec eu ante facilisis, efficitur risus quis, sollicitudin libero.Aliquam erat volutpat.Fusce ac ex nec risus volutpat volutpat at vitae turpis.Pellentesque rhoncus, felis lobortis convallis ullamcorper, sapien velit viverra arcu, vel pretium quam purus id leo.Curabitur tempus tempus magna, vel ornare mauris malesuada ut.Mauris vitae neque ligula.Quisque vel fringilla tortor.Aenean nec eros porttitor, rutrum ligula sit amet, imperdiet nisi. Vivamus pulvinar tempor elit, sed pharetra urna ornare eget.Nunc sit amet nisi sit amet elit vestibulum egestas eget in orci.Suspendisse sit amet risus placerat, dapibus libero ultrices, aliquam mauris.Praesent porta convallis rhoncus.Nunc sit amet mollis nisl, non consectetur erat.Quisque vulputate ornare nunc sed rutrum.Donec elementum lorem ut ultrices pellentesque.Donec at varius purus, vel porta sem.Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi commodo quis tellus id pulvinar. Mauris quis libero dignissim, iaculis elit id, congue nisi. Morbi tristique efficitur dui, placerat molestie elit fringilla id. Suspendisse blandit lorem sed ipsum condimentum congue. Nullam aliquet quis libero eu rutrum. Cras sed purus in metus suscipit aliquet. Praesent non vestibulum purus, a dignissim augue. Nam id tortor nisi. Curabitur eleifend vulputate mauris, eleifend suscipit ante efficitur vel.Quisque sollicitudin dolor nec fringilla pellentesque.Aliquam erat volutpat.Nunc at placerat urna.Mauris fringilla sem turpis, sed feugiat lectus ullamcorper non.Etiam at libero at orci sagittis facilisis.Aliquam erat volutpat.Vestibulum in consectetur libero.Donec metus quam, efficitur eu finibus quis, iaculis in quam.Nam imperdiet, elit eget mollis semper, arcu arcu faucibus tortor, eget rhoncus nisi nisl id mauris.Fusce rutrum risus vel dapibus venenatis.Praesent nisi magna, pretium sed facilisis id, placerat vitae augue.Integer dictum arcu non mi gravida fringilla.Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos.Duis ut tortor sem.Nullam tristique enim malesuada tellus egestas, eget iaculis urna eleifend. Vivamus vehicula ex sapien, at rutrum dui posuere nec.Suspendisse in libero elementum, pretium enim a, elementum ipsum.Duis venenatis tempus augue, a ultrices lacus viverra in.Nunc mattis malesuada sem, a aliquam eros tempus eget.Donec sit amet nisl elementum, porttitor tortor a, blandit ligula.Maecenas mollis varius nibh eu malesuada.Sed ac erat ac est pulvinar facilisis.Fusce vitae odio ac tortor lobortis convallis.Morbi ultrices in nisi et dapibus.Quisque condimentum, diam vitae suscipit lobortis, velit mauris iaculis nunc, eget condimentum nisl ante quis quam.Vivamus purus magna, vulputate quis arcu non, ultrices tristique mauris.Aenean eget elit vitae enim posuere blandit sit amet at metus.Nulla vel fermentum lorem.Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.Suspendisse nec massa auctor, facilisis ex a, lacinia massa. Pellentesque a rutrum libero.Pellentesque sagittis vel nibh at tempor.Praesent euismod euismod leo, sodales vehicula sapien condimentum quis.Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.Duis gravida non nisl placerat blandit.Donec eu ante facilisis, efficitur risus quis, sollicitudin libero.Aliquam erat volutpat.Fusce ac ex nec risus volutpat volutpat at vitae turpis.Pellentesque rhoncus, felis lobortis convallis ullamcorper, sapien velit viverra arcu, vel pretium quam purus id leo.Curabitur tempus tempus magna, vel ornare mauris malesuada ut.Mauris vitae neque ligula.Quisque vel fringilla tortor.Aenean nec eros porttitor, rutrum ligula sit amet, imperdiet nisi. Vivamus pulvinar tempor elit, sed pharetra urna ornare eget.Nunc sit amet nisi sit amet elit vestibulum egestas eget in orci.Suspendisse sit amet risus placerat, dapibus libero ultrices, aliquam mauris.Praesent porta convallis rhoncus.Nunc sit amet mollis nisl, non consectetur erat.Quisque vulputate ornare nunc sed rutrum.Donec elementum lorem ut ultrices pellentesque.Donec at varius purus, vel porta sem.";
//			break;
//		default:
//			return 0;
//			break;
//		}
//
//		chose = 0;
//		int ile = 1;
//		std::string szyfr = "1234567";
//		std::string szyfrTest = "";
//		int szumTest = 0;
//		system("cls");
//		printf("1 - szyfrowanie i deszyfrowanie(normal)\n2 - szyfrowanie i deszyfrowanie(hard)\n3 - zapis do plikow\n4 - odczyt z plikow\n5 - test rozdzielania szyfru\n\n>>");
//		scanf("%d", &chose);
//		system("cls");
//		std::string tmpText = "";
//		switch (chose)
//		{
//		case(1):
//			std::cout << "Przed szyfrowaniem:\t" << tekst << "\n";
//			encrypt.EncryptCezar(tekst, ile);
//			std::cout << "Po szyfrowaniu:\t\t" << tekst << "\n";
//			encrypt.DecryptCezar(tekst, ile);
//			std::cout << "Po deszyfrowaniu:\t" << tekst << "\n";
//			break;
//		case(2):
//			std::cout << "Przed szyfrowaniem:\t" << tekst << "\n";
//			encrypt.Encrypt(tekst, szyfr);
//			std::cout << "Po szyfrowaniu:\t\t" << tekst << "\n";
//			encrypt.Decrypt(tekst, szyfr);
//			std::cout << "Po deszyfrowaniu:\t" << tekst << "\n";
//			break;
//		case(3):
//			_mkdir("test");
//			if (!encrypt.Export(tekst, "test\\test0.bmp", 0)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test1.bmp", 1)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test2.bmp", 2)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test3.bmp", 3)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test4.bmp", 4)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test5.bmp", 5)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test6.bmp", 6)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test7.bmp", 7)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test8.bmp", 8)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test9.bmp", 9)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test10.bmp", 10)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test20.bmp", 20)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test30.bmp", 30)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test40.bmp", 40)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test50.bmp", 50)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test60.bmp", 60)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test70.bmp", 70)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test80.bmp", 80)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test90.bmp", 90)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			if (!encrypt.Export(tekst, "test\\test99.bmp", 99)) std::cout << "BLAD ZAPISYWANIA!!!!!\n"; else std::cout << "OK\n";
//			break;
//		case(4):
//			if (!encrypt.Import(tmpText, "test\\test0.bmp", 0)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test1.bmp", 1)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test2.bmp", 2)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test3.bmp", 3)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test4.bmp", 4)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test5.bmp", 5)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test6.bmp", 6)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test7.bmp", 7)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test8.bmp", 8)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test9.bmp", 9)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test10.bmp", 10)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test20.bmp", 20)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test30.bmp", 30)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test40.bmp", 40)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test50.bmp", 50)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test60.bmp", 60)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test70.bmp", 70)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test80.bmp", 80)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test90.bmp", 90)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			if (!encrypt.Import(tmpText, "test\\test99.bmp", 99)) std::cout << "BLAD ODCZYTU!!!!!\n"; else std::cout << "OK:\t" << tmpText << "\n";
//			break;
//		case(5):
//			encrypt.SeparateCode(szyfr, szumTest, szyfrTest);
//			std::cout << "\nwejscie: " << szyfr << "\nSzyfr: " << szyfrTest << "\nszum: " << szumTest << "\n\n";
//			break;
//		default:
//			return 0;
//			break;
//		}
//		system("pause");
//	}
//
//	return 0;
//}