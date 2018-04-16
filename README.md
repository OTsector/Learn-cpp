# c++ სასწავლო კრებული შექმნილი OT_ის მიერ
# შესავალი:
### რა არის c++ და რატომ უნდა ისწავლოთ ის?
c++ არის დაბალი დონის პროგრამირების ენა.
რაც შეეხება დონეს: დონე ეს გახლავთ პროგრამის განმავლობის მონაკვეთი. უფრო გასაგები რომ იყოს, იხილეთ მისი მუშაობის მონაკვეთთა სპექტრი:

Firefox <> c++ <> Assamblery <> Hexedemical <> Binary <> PC.

შევადაროთ მაღალი დონის ენას:

script.php <> php(.exe) <> C <> Assamblery <> Hexedemical <> Binary <> PC.

მაღალი დონის პროგრამირების ენა უფრო მოსახერხებელია მცირე სისტემური ოპერაციების შესასრულებლად. მაღალი დონის პროგრამული ენა უფრო შორსაა ფუნქციონალურობის მხრივ მისი შინაარსის წაკითხვისთვის ვიდრე დაბალი დონის პროგრამირების ენა.

c++ გახლავთ ძველი c პროგრამული ენის გაუმჯობესებული ვარიანტი, სადაც გამარტივებული და დახვეწილია დეტალები.
c++ გამოიყენება რობოტექნიკის სამართავად, ელექტრო მოწყობილობების დასაკონფიგურირებლად, პროგრამების/თამაშების შესაქმნელად, გამოიყენება საოპერაციო სისტემის დასაწერად, c++_ზე დანაწერი პროგრამა გაეშვება ყველა საოპერაციო სისტემაში (Windows, Mac, Linux, Android, Windows phone...). აპლიკაციების უმრავლესობა დაწერილია სწორედ c++ ენაზე, მათ შორის თამაშების 75%. C++ კოდის ფაილური ფორმატებია: .cc .cpp .cxx .C .c++ .h .hh .hpp .hxx .h++ .

## როგორ შევქმნათ პირველი პროგრამა?
c++ გახლავთ Assamblery_ზე გამავალი ენა, რაც იმას ნიშნავს, რომ მის გასახსნელად საჭიროა მისი კომპილაცია, რათა ჩვენი პროგრამული კოდი გახდეს წაკითხვადი სისტემის მიერ.
კომპილერის გადმოწერა შეგიძლიათ ინტერნეტიდან სახელწოდებით: "MingGW".
თუ თქვენ იყენებთ Linux ის დისტრიბუტივს შეგიძლიათ დააინსტალიროთ პირდაპირ რეპოსიტორის სერვერიდან:

	sudo apt-get install mingw -y
	
კომპილაცია მარტივად ხდება:

	g++ main.cpp -o program
	
ასევ შეგიძლიათ კომპილაციის შემდგომ გაშვების ბრძანების გამოყენებაც "&&"(თუ შეცომა არ მოხდა გააგრძელოს ფუნქცია) სიმბოლოს დახმარებით:

	g++ main.cpp -o program && ./program

ნახეთ ფაილი: 1.cpp და დააკომპილირეთ.

# c++ გაკვეთილები:
გაკვეთილების სერიის პრინციპი მდგომარეობს - კოდში ჩაშენებული აღწერის გამოყენებით კოდის მაქსიმალურად სწორად გააზრებაში.

c++ კოდთან სამუშაოდ დაგჭირდებათ ტექსტური ედიტორი და კომპილერი. ტექსტურ რედაქტორად შეგიძლიათ გამოიყენოთ სისტემის ჩვეულებრივი პროგრამები ("Notepad, Gedit...") ან სხვა.

გაკვეთილი N:1
გაგრძელება იქნება...
