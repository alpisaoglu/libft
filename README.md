# 42-LibFt- 
![image](https://user-images.githubusercontent.com/101434516/202919222-26f908d7-3904-484b-86d0-8746399c4f41.png)
![image](https://user-images.githubusercontent.com/88405217/192702080-69faa195-e289-4b99-90c7-c02f712c02f3.png)
## :books: Kendi yazdığınız ilk kütüphane

### :exclamation: MANDATORY PART 
| S.No | **Function** | **Description** | 
|------|----------|-------------|
| 1.| [isAlnum](libft/ft_isalnum.c) | Dizede alfabe ve rakam olup olmadığını kontrol eder; true ise 1 döndürür|
| 2.| [isAlpha](libft/ft_isalpha.c) | Dizeyi okuyun: Eğer alfabe varsa- 1 değerini döndürmelidir |
| 3.| [isAscii](libft/ft_isascii.c) | c bir ASCII karakteri ise 1 döndürür; aksi takdirde sıfır |
| 4.| [isDigit](libft/ft_isdigit.c)| isdigit() işlevi tamsayı biçiminde tek bir bağımsız değişken alır ve int türünde bir değer döndürür|
| 5.| [isPrint](libft/ft_isprint.c)| Karakter yazdırılabilir ise 1 döndürür| 
| 6.| [Bzero](libft/ft_bzero.c)| Her şeyi sıfıra ayarlar |
| 7.| [Calloc](libft/ft_calloc.c)| Bellek ayırır ve ayrılan belleği sıfıra ayarlar|
| 8.| [Memcmp](libft/ft_cmemcmp.c)| Dizeleri kontrol eder ve farkı döndürür, ayrıca boş alan olup olmadığını da kontrol eder|
| 9.| [Memcpy](libft/ft_memcpy.c)| **kaynaktaki** tüm verileri **hedefe** kopyalar | 
|10.| [Memset](libft/ft_memset.c)| Bellek bloğunu veya dizeyi belirli bir değere kadar doldurur |
|11.| [Memmove](libft/ft_memmove.c) | Her şeyi **kaynaktan** **hedefe** taşır, memcpy'nin yapamadığı çakışmaları halleder |
|12.| [Memchr](libft/ft_memchr.c) | Dize içinde bir karakter arar ve karakterin o konumundan karakter döndürür|
|13.| [Strchr](libft/ft_strchr.c) | Dize içinde belirli bir karakteri arar ve dizeyi bu karakter konumundan döndürür | 
|14.| [Strrchr](libft/ft_strrchr.c) | Belirli bir karakteri arar ancak bu karakter dizesi içindeki son karakterdir ve bu karakteri/dizeyi döndürür|
|15.| [Strlen](libft/ft_strlen.c) | Dize uzunluğunu döndürür | 
|16.| [Strncmp](libft/ft_strncmp.c)| En fazla n karakteri karşılaştırır. Eğer n değeri içinde bir fark bulunursa, farkı döndürür|
|17.| [Strrstr](libft/ft_strrstr.c)| Dize içinde en son oluştuğu karakteri döndürür |
|18.| [Strnstr](libft/ft_strnstr.c)| Bir kaynak dizenin içinde bir dize arar ve kaynak dizenin içinde bulunursa dizeyi döndürür|
|19.| [Split](libft/ft_split.c) | Dizeleri farklı konumlara böler| 
|20.| [Strdup](libft/ft_strdup.c) | dizeyi kaynaktan hedefe duplisubstr
|21.| [Strjoin](libft/ft_strjoin.c) | Kaynak ve hedef dizeyi başka bir dizede birleştirir (malloc) |
|22.| [Strlcat](libft/ft_strlcat.c) | Hem kaynak hem de hedef dize birleşimini döndürür, ancak kısıtlamalar vardır | 
|23.| [Strlcpy](libft/ft_strlcpy.c)| Temel olarak kaynak dizeyi hedef dizeye kopyalar, ancak "ne kadar kopyalanacağı" konusunda bir sınırlama vardır |
|24.| [Strtrim](libft/ft_strtrim.c) | Kullanıcı tarafından belirtilen dizeyi başlangıç ve bitişten kaldırır| 
|25.| [Substr](libft/ft_substr.c) | Kullanıcı tarafından parametreleri verilen dizeyi çıkarır. "Eve gidiyoruz" dizesinin başlangıç pozisyonunun nerede olduğunu belirtiriz ve ayrıca dizenin o kadarını döndürmek için n değeri atarız. Diyelim ki başlangıç = 3 ve n = 7, fonksiyon başka bir dizeye depolanmak üzere "are g" döndürür (malloc) |
|26.| [Atoi](libft/ft_atoi.c)| Dizeyi tamsayı değerine dönüştürür |
|27.| [Itoa](libft/ft_itoa.c)| Tamsayıları dize değişmezine dönüştürür |
|28.| [ToUpper](libft/ft_toupper.c)| Karakteri büyük harfe dönüştürür|
|29.| [ToLower](libft/ft_tolower.c)| Karakteri küçük harfe dönüştürür|
|30.| [Strmapi](libft/ft_strmapi.c)| (f) fonksiyonunu kullanarak karakteri değiştirin|
|31.| [Striteri](libft/ft_striteri.c)| (f) işlevi aracılığıyla karakter değiştirme|
|32.| [Putchar_fd](libft/ft_putchar_fd.c)| c karakterini verilen dosya tanımlayıcısına çıktı olarak verir| 
|33.| [Putstr_fd](libft/ft_putstr_fd.c)| Dizeyi verilen dosya tanımlayıcısına çıktı olarak verir |
|34.| [Putendl_fd](libft/ft_putendl_fd.c)| Dosya tanımlayıcısına bir dize çıktısı verir ancak satırsonu ile biter|
|35.| [Putnbr_fd](libft/ft_putnbr_fd.c)| Verilen dosya tanımlayıcısına n tamsayısını çıktı olarak verir


---
### ✔️ BONUS PART 
| S.No | **Function** | **Description** | 
|------|----------|-------------|
|36. | [Lstnew](libft/ft_lstnew.c)| Yeni bir düğüm tahsis eder ve next değişkeni Null olarak başlatılır| 
|37.| [Lstadd_front](libft/ft_lstadd_front.c)| Listenin başına yeni düğümü ekler | 
|38.| [Lstsize](libft/ft_lstsize.c)| Bir listedeki düğüm sayısını sayar |
|39.| [lstlast](libft/ft_lstlast.c)| Listenin son düğümünü döndürür| 
|40.| [lstadd_back](libft/ft_lstadd_back.c)| Listenin sonuna yeni düğümü ekler |
|41.| [lstdelone](libft/ft_lstdelone.c)| delete kullanarak düğüm içeriğini serbest bırakın ve sonraki serbest bırakılmamalıdır|
|42.| [lstclear](libft/ft_lstclear.c)| del ve free| kullanarak verilen düğümü ve bu düğümün her ardılını siler ve serbest bırakır
|43.| [lstiter](libft/ft_lstiter.c)| Listeyi yineler ve f işlevini her düğümün içeriğine uygular. 
|44.| [lstmap](libft/ft_lstmap.c)| Yeni bir liste oluşturur ve f fonksiyonunu her düğümün içeriğine uygular. del fonksiyonu, gerektiğinde bir düğümün içeriğini silmek için kullanılır.|
--- 
## ✏️ THINGS TO READ ABOUT 

## 📄 MAKEFILE

<p align="center">
<img src= "https://user-images.githubusercontent.com/88405217/184244154-60f36c2b-ecb4-4c91-8044-2444367b03a8.jpg">
</p>

## Writing Rules in MakeFiles

ibft.a’yı “NAME”e tanımladım aşağıda’da $(NAME)’i “all”a atadım all dediğim için hepsini kapsar.

Ve sistem “NAME” ile başlar.

⚡ $(wildcard *c)’yi SRCS(sources)’e atadım. Yani “wildcard” fonksiyonuyla bütün .c dosyalarını “SRCS” değişkenine atadık.

 “*c” Sol tarafta ne olursa olsun bütün .c uzantılı dosyaları alır.
⚡ “WILDCARD” = O dizindeki bütün dosyaları listelemek için kullanılır.

⚡ “$” işaretinin iki farklı anlamı vardır birisi parantezin içinde hangi değişken adını yazdığımızda değişkenin değerini çağırırız. Diğer kullanımı da fonksiyon çağırmadır.

⚡ OBJS = “SRCS”da bulunan bütün c uzantılı dosyaları .o uzantılı dosya adlarına değiştirdik ve bunları “OBJS”e atadık.

⚡ Derleme shell komutunu “CC” olarak tanımladım shell komutunu değişkene atadık.

⚡ Shell komutunu tekrardan “”CCFLAGS” olarak tanımladık.

⚡ “PHONY” = Öncelikli çalıştırma işlemini yapar.Dizinde aramak yerine direkt kodu çalıştırır.Yani dosyamızın içinde eğer yazdığımız.(all, clean, fclean, re, bonus)’dan birisi varsa çalışmayacaktır.Öncelikli olarak tanımladığımız için “Mak-eFile” içinde bulup çalışacaktır.

⚡ $(NAME): $(OBJS) “OBJS” Dosyalarını “NAME”e kural olarak belirle.

ar rcs 
(OBJS) = Yukarıda yazdığım kuralı da burada kullandım.Yani “NAME” olarak “LIBFT.A”ya çıktı verir.

⚡ %.o:%.c “%” Hepsini kapsıyor Shell komutu olduğu için “%” işareti kullanırız.

Alttaki de $(CC) -c “ˆ” tek tek gez komutudur.Yani tek tek gezerek derliyor.

⚡ “:” tanımlama işaretidir.

⚡Clean’e rm-f ile (OBJS) ve (BONUS_OBJS) bu nesneleri silme komutunu tanımladım.

Sonrasında “clean”i de “fclean”e tanımladım “$(NAME)”de kini de sil dedim.Yani Libft.a’yı.

⚡“re”de rebuildden geliyor = yani silip “$(NAME)”i yeniden oluşturuyor.

⚡Subjects’de dediği gibi “OBJS” ve “BONUS_OBJS”i “bonus”a kural olarak belirliyoruz.

Sonrasında da çıktı olarak bize hepsini veriyor.”$(NAME)”e göre bize 
(BONUS_OBJS)

⚡“ar rcs” Bir kitaplığı derlemek için “Makefile” kullanırken kullanacağınız en olası komuttur. r, kitaplık zaten mevcutsa, kitaplık içindeki eski dosyaları yeni dosyalarınızla değiştirin.c, mevcut değilse kütüphaneyi oluşturmak anlamına gelir.

⚡Clean sadece oluşan “.o” uzantılı dosyaları siler.Fclean yaptığımda “NAME”i de silecektir.Yani libft.a’yı.


#### File Descriptor
Dosya Tanımlayıcısı, dosyalara veya diğer input/output kaynaklarına erişmek için kullanılan bir tamsayıdır(Birnevi kimlik). Fd'nin bazı default atamaları vardır.
0 = Standart Giriş - Klavyeden okuma
1 = Standart Çıkış - Ekrana yazdırma
2 = Standart Hata - Hata mesajı yazdırma



