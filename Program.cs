/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hellow");
            Console.WriteLine("{0} {1}", 3.14f, 12);
            Console.WriteLine("{0} + {1} = {2}", 1, 2, 1 + 2);
            Console.WriteLine("{0:c}", 12345);
            Console.WriteLine("{0:n}", 12345);
            Console.WriteLine("{0:f2}", 0.12345);
            Console.WriteLine("{0:f4}", 0.12345);
            Console.WriteLine("{0:e}", 0.12345);
            Console.WriteLine("{0:p}", 0.12345);
            Console.WriteLine("{0:x}", 45);
        }
    }
}
*/

/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            byte a = 255;
            sbyte b = (sbyte)a;
            Console.WriteLine($"a = {a}");
            Console.WriteLine($"b = {b}");
        }
    }
}
*/

/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int e = -1000_0000;
            uint f = 3_0000_0000;
            Console.WriteLine($"e={e}, f={f}");

            long g = -5000_0000_0000;
            ulong h = 200_0000_0000;
            Console.WriteLine($"g={g}, h={h}");
            Console.WriteLine("{0} ~ {1}", short.MinValue, short.MaxValue);
            Console.WriteLine("{0} ~ {1}", double.MinValue, double.MaxValue);
        }
    }
}
*/



// 리터럴 연습
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            byte a = 240;
            Console.WriteLine($"a={a}");

            byte b = 0b1111_0000;
            Console.WriteLine($"b={b}");

            byte c = 0xf0;
            Console.WriteLine($"c={c}");

            uint d = 0x1234_abcd;
            Console.WriteLine($"d={d}");
        }
    }
}
*/


//실수형의 연습
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            float a = 3.1415_9265_3589_7932_3846_2643_3832_79f;     // float >> f
            double b = 3.1415_9265_3589_7932_3846_2643_3832_79;     // double는 필요없음
            decimal c = 3.1415_9265_3589_7932_3846_2643_3832_79m;   // m >> decimal

            Console.WriteLine(a);
            Console.WriteLine(b);
            Console.WriteLine(c);
        }
    }
}
*/




// 문자형 연습, 문자열형 연습.
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static bool boolVar;    // 클래스의 멤버변수는 false로 자동 초기화됨.
        static void Main(string[] args)
        {
            char ch = ' ';  // 공백 없으면 에러뜸.
            int number = '7';   // 암시적인 값 변환
            Console.WriteLine("char '7'은 문자 상수 {0}이다.", number);

            bool localBoolVar = true;
            Console.WriteLine("{0} {1} {2}", boolVar, localBoolVar);
        }
    }
}
*/


// object로 선언한 다양한 자료형 형태
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            object a = 123;
            object b = 3.1415_9265_3589_7932_3846_2643_3832_79m;    // f, , m에 따라 출력 소수점 자리 달라짐
            object c = true;
            object d = "안녕하세요";

            Console.WriteLine(a);
            Console.WriteLine(b);
            Console.WriteLine(c);
            Console.WriteLine(d);
        }
    }
}
*/


// 문자열 인덱스. 실습 : 문자열을 입력하여 출력하기
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string str1 = "안녕하세요.";
            string str2 = "홍길동입니다.";

            Console.Write("{0}\n", str1);
            Console.Write("{0}\n", str2);
            Console.WriteLine("{0}\n", str2[0]);

            string str3 = "c:\\temp\\test.text";
            Console.WriteLine("{0}", str3);

            string str4 = "c:\temp\test.text";
            Console.WriteLine("{0}", str4);
        }
    }
}
*/


// 문자열의 더하기 연산. 문자열 합치기. C언어와 달리 문자열을 합칠 수 있다. strcat과 같다. 문자열에서는 +만 가능 -,*,/ 다 못씀
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string str1 = "안녕하세요. ";
            string str2 = "홍길동입니다.\n";

            string str3 = str1 + str2;
            string str4 = "pro" + "gram";

            Console.WriteLine("{0}", str3);
            Console.WriteLine(str4);
        }
    }
}
*/


// 문자열의 문자 개수 세기. Length로 확인
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string str1 = "안녕하세요.";
            Console.WriteLine("문자 개수 : {0}", str1.Length);
            Console.WriteLine($"문자 개수 : {str1.Length}");
        }
    }
}
*/



// 문자열 속성 이용해보기
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string str = "Good Morning";
            Console.WriteLine(str);

            Console.WriteLine($"IndexOf \"Good\":{str.IndexOf("Good")}");
            Console.WriteLine($"IndexOf \'o\':{str.IndexOf('o')}");
            Console.WriteLine($"LastIndexOf \"Good\":{str.LastIndexOf("M")}");
            Console.WriteLine($"LastIndexOf \'o\':{str.LastIndexOf('o')}");
            Console.WriteLine($"StatsWith \"Good\":{str.StartsWith("Good")}");
            Console.WriteLine($"StatsWith \"Morning\":{str.StartsWith("Morning")}");
            Console.WriteLine($"EndsWith \"Good\":{str.EndsWith("Good")}");
            Console.WriteLine($"EndsWith \"Morning\":{str.EndsWith("Morning")}");
            Console.WriteLine($"Contains \"Evening\":{str.Contains("Evening")}");
            Console.WriteLine($"Contains \"Morning\":{str.Contains("Morning")}");
            Console.WriteLine($"Replaced \"Morning\" with \"Evening\":{str.Replace("Morning", "Evening")}");
        }
    }
}
*/


// 문자열 변경 예제
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string a = " abCD ";
            Console.WriteLine("ToLower() : \"{0}\"", a.ToLower());
            Console.WriteLine("ToUpper() : \"{0}\"", a.ToUpper());

            Console.WriteLine("Insert() : \"{0}\"", a.Insert(3, "Love"));
            Console.WriteLine("a : \"{0}\"", a);

            Console.WriteLine("Remove() : \"{0}\"", a.Remove(0, 2));

            Console.WriteLine("Trim() : \"{0}\"", a.Trim());
            Console.WriteLine("TrimStart() : \"{0}\"", a.TrimStart());
            Console.WriteLine("TrimEnd() : \"{0}\"", a.TrimEnd());
        }
    }
}
*/


// var형 변수에 데이터가 분명한 값으로 선언과 초기화를 한 후에 두 값을 더한 결과
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var value1 = 3.14f;
            float value2 = 10.0f;
            float sum = value1 + value2;
            Console.WriteLine("{0} / {1} / {2:f} / {3:f1} / {4}", value1, value2, value2, value2, sum);
        }
    }
}
*/


// 스택과 힙을 쓰는 object와는 달리 var는 모든 자료형 담는데 스택만 써서 빠름. 대신 제약이 많음.
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var a = 20;
            Console.WriteLine("Type : {0}, Value : {1}", a.GetType(), a);

            var b = 3.14141213;
            Console.WriteLine("Type : {0}, Value : {1}", b.GetType(), b);

            var c = "Hello, World";
            Console.WriteLine("Type : {0}, Value : {1}", c.GetType(), c);

            var d = new int[] { 10, 20, 30 };
            Console.WriteLine("Type : {0}, Value : ", d.GetType());

            foreach (var e in d)
            {
                Console.WriteLine(e);
            }
            Console.WriteLine();
        }
    }
}
*/


// nullable형을 선언하고 판독하기
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int? num1 = null;

            Console.WriteLine(num1.HasValue);
            if (num1 != null)
            {
                Console.WriteLine(num1.Value);
            }
            num1 = 150;
            Console.WriteLine(num1.HasValue);
            Console.WriteLine(num1.Value);
        }
    }
}
*/

// 실수형간의 형변환
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            float f1 = 68.7512f;
            Console.WriteLine("float : {0}\n", f1);

            double d1 = (double)f1;
            Console.WriteLine("double : {0}\n", d1);

            double d2 = 68.7512;
            Console.WriteLine("double : {0}\n", d2);

            float f2 = (float)d2;
            Console.WriteLine("float : {0}\n", f2);
        }
    }
}
*/


// 데이터 변환
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int value1 = 127;
            string str1 = value1.ToString();
            Console.WriteLine("value1의 값이 문자열로 바꼈는지 확인 = {0}", str1 + 1);

            int value2 = Convert.ToInt32(str1);
            Console.WriteLine("str1의 값이 정수로 바꼈는지 확인 = {0}", value2 + 1);

            string str2 = "3.14";
            float value3 = float.Parse(str2);
            Console.WriteLine("str2의 값이 실수로 바꼈는지 확인 = {0}", value3 + 1);
        }
    }
}
*/



// 데이터 변환(소수점 변화)
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double number = 52.273103;

            Console.WriteLine(number.ToString("0.0"));
            Console.WriteLine(number.ToString("0.00"));
            Console.WriteLine(number.ToString("0.000"));
            Console.WriteLine(number.ToString("0.0000"));

            Console.WriteLine(int.Parse("52.273"));

            Console.WriteLine(int.Parse("abc"));
        }
    }
}
*/


// 숫자와 문자열 덧셈, 숫자와 문자열을 +연산자를 사용하면 문자열 연결 연산자로 적용됨.
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(52 + 273);
            Console.WriteLine("52" + 273);
            Console.WriteLine(52 + "273");
            Console.WriteLine("52" + "273");
        }
    }
}
*/



// 변환(형변환, 데이터 변환). bool에서는 True와 False외에 다른 문자열은 오류 발생함
// 문자열을 불로 전환.
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(bool.Parse("True"));
            Console.WriteLine(bool.Parse("true"));
            Console.WriteLine(bool.Parse("false"));
            Console.WriteLine(bool.Parse("Hi"));
        }
    }
}
*/



/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            
        }
    }
}

*/

/* 24.01.12 *******************************************************************************************************/
// 실습 : 기본형 값을 박싱한 후에 다시 언박싱하여 출력
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int i = 123;
            object obj = i;             // 박싱(int -> object) 힙에 데이터가 저장되느냐
            int i2 = (int)obj;          // 언박싱(object -> int) 스택에 데이터가 저장되느냐
            Console.WriteLine(i);
            Console.WriteLine(obj);
            Console.WriteLine(i2);
        }
    }
}
*/


// 구조체에 선언된 const, static 변수만 초기화 가능
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        public struct MyStruct
        {
            public const float PI = 3.14159f;
            public static int age = 27;
            public int val;
            //public int val = 10;
        }
        static void Main(string[] args)
        {
            Console.WriteLine("{0}, {1}", MyStruct.PI, MyStruct.age);
            MyStruct s;
            s.val = 10;
            Console.WriteLine(s.val);
        }
    }
}
*/


/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        public struct MyStruct
        {
            public int age;
            public string testA = null;    
            public string testB = null;
            public MyStruct(int inAge)
            {
                this.age = inAge;
            }
        }
        static void Main(string[] args)
        {
            MyStruct s;
            s.age = 10;
            Console.WriteLine(s.age);
            

            MyStruct s2 = new MyStruct();
            Console.WriteLine(s2.age);


            MyStruct s3 = new MyStruct(15);
            Console.WriteLine(s3.age);

            Console.WriteLine(s3.testA);


        }
    }
}
*/

// console.ReadLine()으로 문자열을 입력 받은 뒤 정수로 변환하기
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("문자열을 입력하세요 : ");
            string input = Console.ReadLine();
            Console.WriteLine("Input : " + input);

            int intInput = int.Parse(input);
            Console.WriteLine("Output : " + (intInput + 1));
        }
    }
}
*/



// 구조체 멥버를 입력받아 출력하기
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        public struct MyStruct
        {
            public int age;
            public string testA = null;
            public string testB = null;
            public MyStruct(int inAge)
            {
                this.age = inAge;
            }
        }
        static void Main(string[] args)
        {
            MyStruct s1;
            Console.Write("age 입력 : ");
            s1.age = int.Parse(Console.ReadLine());
            Console.WriteLine("구조체 멤버 age = {0}", s1.age);

            MyStruct s2;
            Console.Write("문자열 멤버 입력 : ");
            s2.testA = Console.ReadLine();
            Console.Write("문자열 멤버 입력 : ");
            s2.testB = Console.ReadLine();
            Console.WriteLine("구조체 멤버1 : {0}, 구조체 멤버2 : {1}", s2.testA, s2.testB);

        }
    }
}
*/



// 생성자의 매개변수를 이용한 출력
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        public struct MyStruct
        {
            public int age;
            public float num;
            public bool isReady;
            public MyStruct(int inAge, float innum, bool inisReady)
            {
                this.age = inAge;
                this.num = innum;
                this.isReady = inisReady;
            }
        }
        static void Main(string[] args)
        {
            // 생성자의 매개변수를 이용한 초기화
            MyStruct test2 = new MyStruct(13, 40, true);   
            Console.WriteLine("{0} {1} {2}", test2.age, test2.num, test2.isReady);   
        }
    }
}
*/



// 구조체 멤버들을 같은 구조체에 대입하면 값 복사가 이뤄짐
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        public struct Mystruct
        {
            public int age;
            public string name;
        }
        static void Main(string[] args)
        {
            Mystruct testStruct1, testStruct2;
            testStruct2.age = 27;
            testStruct2.name = "struct";
            Console.WriteLine("복사할 구조체 : age={0}, name={1}", testStruct2.age, testStruct2.name);
            testStruct1 = testStruct2;
            Console.WriteLine("복사할 구조체 : age={0}, name={1}", testStruct1.age, testStruct1.name);
        }
    }
}
*/



// 구조체는 값 형식, 클래스의 객체는 참조 형식
/*
using System;

namespace Daily240111_15
{
    public struct MyStruct
    {
        public int age;
    }
    public class MyClass
    {
        public int age;
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            MyStruct test1 = new MyStruct();
            test1.age = 12;
            MyStruct test2 = test1;
            test2.age = 24;
            Console.WriteLine("{0}, {1}", test1.age, test2.age);

            MyClass test3 = new MyClass();
            test3.age = 12;
            MyClass test4 = test3;
            test4.age = 24;

            Console.WriteLine("{0}, {1}", test3.age, test4.age);
        }
    }
}
*/



// 사용자 지정형(튜플)
/*
using System;
using System.ComponentModel.DataAnnotations;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            (int, int) tuple = (110, 50);
            (int Max, int Min) tuple2 = (110, 50);
            var tuple3 = (Max: 110, Min: 50);
            var tuple4 = ("슈퍼맨", 9999);

            Console.WriteLine("{0}, {1}", tuple.Item1, tuple.Item2);
            Console.WriteLine("{0}, {1}", tuple2.Item1, tuple2.Item2);
            Console.WriteLine("{0}, {1}", tuple3.Max, tuple3.Min);
            Console.WriteLine("{0}, {1}", tuple4.Item1, tuple4.Item2);
        }
    }
}
*/



// 튜플간 대입
/*
using System;
using System.ComponentModel.DataAnnotations;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var name1 = ("슈퍼맨", 1111);
            var name2 = ("배트맨", 2222);
            name1 = name2;
            Console.WriteLine("{0}, {1}", name1.Item1, name1.Item2);
            name1 = ("원더우먼", 3333);
            Console.WriteLine("{0}, {1}", name1.Item1, name1.Item2);
            name1 = ("d", 'x');
            Console.WriteLine("{0}, {1}", name1.Item1, name1.Item2);

        }
    }
}
*/



// 열거형
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        enum DialogResult1 { Yes, No, CANCEL } // 주소값을 가지고있는 문자열
        enum DialogResult3 { Yes = 10, No, CANCEL, CONFIRM = 20, OK } // 

        static void Main(string[] args)
        {
            Console.WriteLine(DialogResult1.Yes);
            DialogResult1 result = DialogResult1.Yes;
            Console.WriteLine(result == DialogResult1.Yes);

            Console.WriteLine((int)DialogResult3.Yes);
            Console.WriteLine((int)DialogResult3.No);
            Console.WriteLine((int)DialogResult3.CANCEL);
            Console.WriteLine((int)DialogResult3.CONFIRM);
            Console.WriteLine((int)DialogResult3.OK);
        }
    }
}
*/


// 문제 : 구조체를 선언하여 각 과목의 점수를 저장하고 합계와 평균을 구하는 코드 작성
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        public struct Score
        {
            public int kor, eng, math, social, science;
        }
        static void Main(string[] args)
        {
            Score s = new Score();
            double sum = 0;
            double avg = 0;
            Console.WriteLine("국어, 영어, 수학, 사회, 과학 점수 입력하세요");
            s.kor = int.Parse(Console.ReadLine());
            s.eng = int.Parse(Console.ReadLine());
            s.math = int.Parse(Console.ReadLine());
            s.social = int.Parse(Console.ReadLine());
            s.science = int.Parse(Console.ReadLine());

            sum = s.kor + s.eng + s.math + s.social + s.science;
            avg = sum / 5;
            Console.WriteLine("평균 : {0:f2}",avg);

        }
    }
}
*/




// 4장 연산자 

// 논리부정
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            bool bFlag = false;
            Console.WriteLine("{0} {1} {2}", !bFlag, !true, !false);
        }
    }
}
*/





// 나머지 연산자와 부호
// 나머지 연산자의 부호는 왼쪽 피연산자의 부호를 따름
// 오른쪽 피연산자의 부호는 연산에 상관없음
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(4 % 3);       // 1
            Console.WriteLine(-4 % 3);      // -1
            Console.WriteLine(4 % -3);      // 1
            Console.WriteLine(-4 % -3);     // -1
        }
    }
}
*/




// string에서 +는 문자열 연결
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string str = "3" + ".14";
            Console.WriteLine(str);
            Console.WriteLine(+5);
            Console.WriteLine(5 + 5);
            Console.WriteLine(5 + .5);
            Console.WriteLine("5" + "5");
            Console.WriteLine(5.01f + "5");
            Console.WriteLine("5" + 3.14f);
            Console.WriteLine(5 + 5 + 5 + "문자열");
            str = 1 + "test" + 3.14f + "abcd";
            Console.WriteLine(str);
        }
    }
}
*/



// 논리 연산자
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine((32 > 33) && (12 < 5));
            Console.WriteLine((32 > 33) && (12 > 5));
            Console.WriteLine((47 > 35) || (12 < 5));
            Console.WriteLine((47 < 35) || (12 < 5));
            Console.WriteLine(!true);
        }
    }
}
*/





/* 24.01.15 *******************************************************************************************************/

// 시프트 연산.
// D5 : 5자리의 10진수 형식으로 출력하고 나머지는 0으로 채우라는 의미
// X8 : 8자리의 16진수 형식으로 출력하고 나머지는 0으로 채우라는 의미
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Testing <<...");

            int a = 1;
            Console.WriteLine("a     : {0:D5} (0x{0:x8})", a);
            Console.WriteLine("a << 1: {0:D5} (0x{0:x8})", a<<1);
            Console.WriteLine("a << 2: {0:D5} (0x{0:x8})", a<<2);
            Console.WriteLine("a << 5: {0:D5} (0x{0:x8})", a<<5);

            Console.WriteLine("Testing <<...");

            int b = 255;
            Console.WriteLine("b     : {0:D5} (0x{0:x8})", b);
            Console.WriteLine("b >> 1: {0:D5} (0x{0:x8})", b>>1);
            Console.WriteLine("b >> 2: {0:D5} (0x{0:x8})", b >> 2);
            Console.WriteLine("b >> 5: {0:D5} (0x{0:x8})", b >> 5);

        }
    }
}
*/



// 문자열 또한 복합대입 연산자가 가능하다
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string output = "hello\t";
            output += "world";
            output += "!";
            Console.WriteLine(output); 
        }
    }
}
*/




// null 조건부 연산자(?), null 병합 연산자(??)
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        class Foo
        {
            public int number;
        }
        static void Main(string[] args)
        {
            Foo foo = null;
            int? bar = null;
            bar = foo?.number;  // ? . 이부분이 foo가 널이면 bar에 null 대입하고 아니면 bar에 foo.number을 대입한다. 
            Console.WriteLine(bar);
        }
    }
}
*/




// 5장 제어

// if문 써보기
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a;

            Console.Write("a 값을 입력하세요 : ");
            a = int.Parse(Console.ReadLine());  // Console.ReadLine()은 문자열로 입력을 받기 때문에 정수로 받기 위해서는 int.Parse로 받아야한다.

            if (a % 2 == 0) {
                Console.WriteLine("a 는 짝수입니다");
            }
            else Console.WriteLine("a 는 홀수입니다");
        }
    }
}
*/




// 현제 컴퓨터의 시간을 불러와서 오전과 오후 구분하기
// DateTime 써보기
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(DateTime.Now.Year+"년");
            Console.WriteLine(DateTime.Now.Month+"월");
            Console.WriteLine(DateTime.Now.Day+"일");
            Console.WriteLine(DateTime.Now.Hour+"시");
            Console.WriteLine(DateTime.Now.Minute+"분");
            Console.WriteLine(DateTime.Now.Second+"초");

            if((DateTime.Now.Hour) < 12) { 
                Console.WriteLine("오전입니다");
            }
            else Console.WriteLine("오후입니다");
        }
    }
}
*/



/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(DateTime.Now.ToShortTimeString());

            if ((DateTime.Now.Hour) < 12)
            {
                Console.WriteLine("오전입니다");
            }
            else Console.WriteLine("오후입니다");
        }
    }
}
*/



// if문 연습 + 입력받기연습
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("점수를 입력하세요 : ");

            int score = int.Parse(Console.ReadLine());
            char grade = ' ';

            if (score >= 90) grade = 'A';
            else if (score >= 80) grade = 'B';
            else if (score >= 70) grade = 'C';
            else grade = 'D';

            Console.WriteLine(grade);
        }
    }
}
*/



// 문제 : DataTime을 이용하여 컴퓨터의 현재 시간이 11시 이전이면 "아침 먹을 시간입니다" 가 출력되도록 하고 15시보다 작으면 "점심 먹을 시간입니다"가 출력 되도록 하고 그 이후라면 "저녁먹을 시간입니다"가 출력되도록 코딩하기
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            if (DateTime.Now.Hour < 11) Console.WriteLine("아침 먹을 시간입니다.");
            else if (DateTime.Now.Hour < 15) Console.WriteLine("점심 먹을 시간입니다.");
            else Console.WriteLine("저녁 먹을 시간입니다.");
        }
    }
}
*/


// 사용자로부터 정수 한 개를 입력 받아 그 숫자가 음수 양수 0 인지 판별하고, 짝수 홀수인지 구분하시오.
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a;
            Console.Write("숫자를 입력하세요 : ");
            a = int.Parse(Console.ReadLine());

            if (a < 0) Console.WriteLine("음수입니다.");
            else if (a == 0) Console.WriteLine("0 입니다.");
            else {             
                if (a % 2 == 0) Console.WriteLine("짝수입니다.");
                else Console.WriteLine("홀수입니다.");
            }
        }
    }
}
*/



// switch, case 문(정수)
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num = 1;
            switch(num)
            {
                case 1:
                    Console.WriteLine("1입니다");
                    break;      // break문 생략하면 컴파일 에러 -> 의도적 break문 생략 불가능
                case 2:
                    Console.WriteLine("2입니다");
                    break;
            }
        }
    }
}
*/




// switch, case 문(문자열)
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string str = "yes";
            switch (str)
            {
                case "no":
                    Console.WriteLine("no 입니다");
                    break;      // break문 생략하면 컴파일 에러 -> 의도적 break문 생략 불가능
                case "yes":
                    Console.WriteLine("yes 입니다");
                    break;
            }
        }
    }
}
*/



/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            object obj = null;
            Console.Write("숫자를 입력하세요");
            string s = Console.ReadLine();
            if (int.TryParse(s, out int out_i))
                obj = out_i;
            else if (float.TryParse(s, out float out_f))
                obj = out_f;
            else obj = s;

            switch (obj)
            {
                case int i:
                    Console.WriteLine("{0}는 int 형식입니다.", i);
                    break;
                case float f when f >= 0:
                    Console.WriteLine("{0}는 양의 float 형식입니다.", f);
                    break;
                case float f:
                    Console.WriteLine("{0}는 음의 float 형식입니다.", f);
                    break;
                default:
                    Console.WriteLine("{0}는 모르는 형식입니다.", obj);
                    break;
            }
        }
    }
}
*/




// 문자열을 입력 받아 입력받은 문자열 안에 지정한 하위 문자열이 있는지 확인하고 출력
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("입력 : ");
            string line = Console.ReadLine();

            if (line.Contains("안녕"))
            {
                Console.WriteLine("안녕하세요~");
            }
            else Console.WriteLine("뭣?!");
        }
    }
}
*/



// 키 입력에 따른 switch문 사용
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("콘솔 키를 입력하세요 : ");
            ConsoleKeyInfo info = Console.ReadKey();

            switch (info.Key)
            {
                case ConsoleKey.UpArrow:
                    Console.WriteLine("위로이동");
                    break;
                case ConsoleKey.RightArrow:
                    Console.WriteLine("우측이동");
                    break;
                case ConsoleKey.LeftArrow:
                    Console.WriteLine("좌측로이동");
                    break;
                case ConsoleKey.DownArrow:
                    Console.WriteLine("아래로이동");
                    break;
            }
        }
    }
}
*/



// 사용자로부터 태어난 년도를 입력 받아 그 해의 띠를 출력하시오
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int y;
            
            Console.Write("태여난 년도를 입력하세요 : ");
            y = (int.Parse(Console.ReadLine())) % 12;

            switch(y){
                case 0:
                    Console.WriteLine("원숭이 띠");
                    break;
                case 1:
                    Console.WriteLine("닭 띠");
                    break;
                case 2:
                    Console.WriteLine("개 띠");
                    break;
                case 3:
                    Console.WriteLine("돼지 띠");
                    break;
                case 4:
                    Console.WriteLine("쥐 띠");
                    break;
                case 5:
                    Console.WriteLine("소 띠");
                    break;
                case 6:
                    Console.WriteLine("호랑이 띠");
                    break;
                case 7:
                    Console.WriteLine("토끼 띠");
                    break;
                case 8:
                    Console.WriteLine("용 띠");
                    break;
                case 9:
                    Console.WriteLine("뱀 띠");
                    break;
                case 10:
                    Console.WriteLine("말 띠");
                    break;
                case 11:
                    Console.WriteLine("양 띠");
                    break;
            }
        }
    }
}
*/



// 문제 : 사용자로부터 (x, y)좌표를 입력 받아서 좌표가 속하는 사분면을 화면에 출력하는 프로그램을 작성하시오.
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int x, y;
            Console.Write("좌표를 입력하세요(x) : ");
            x = int.Parse(Console.ReadLine());
            Console.Write("좌표를 입력하세요(y) : ");
            y = int.Parse(Console.ReadLine());

            if ((x > 0) && (y > 0)) Console.WriteLine("1사분면");
            else if ((x < 0) && (y > 0)) Console.WriteLine("2사분면");
            else if ((x < 0) && (y < 0)) Console.WriteLine("3사분면");
            else if ((x > 0) && (y < 0)) Console.WriteLine("4사분면");
            else if (x == 0 && y == 0) Console.WriteLine("원점");
            else
            {
                Console.WriteLine("축 위에 있습니다.");
            }
        }
    }
}
*/




// do while문, 무조건 한번은 실행됨. 이미 i=0이 되었지만 다음 do while문에서 i의 0값이 출력됨을 알 수 있음.
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int i = 10;

            do
            {
                Console.WriteLine("a)i : {0}", i--);
            }while(i > 0);
            do
            {
                Console.WriteLine("b)i : {0}", i--);
            } while (i > 0);

        }
    }
}
*/


// foreach문을 이용하여 배열 요소값을 출력
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] arr = { 1, 2, 3, 4 };
            
            foreach (int nValue in arr)
            {
                Console.WriteLine(nValue);
            }

            //int[] arr2 = { 1, 2, 3, 4 };
            //int nValue2;        // 이렇게 밖에서 선언하면 안됨. foreach안에 형식과 식별자가 안에 다 있어야함.

            //foreach (nValue2 in arr2)
            //{
            //    Console.WriteLine(nValue2);
            //}
        }
    }
}
*/



/*
using System;
using System.Collections;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            ArrayList list = new ArrayList();
            list.Add(1.0);     
            list.Add(2.1);
            list.Add(3.3);
            list.Add(4.7);
                       
            foreach (double nValue in list) {
                Console.WriteLine(nValue);
            }
        }
    }
}
*/



// string 배열을 선언하고 foreach를 통해 배열의 요소를 출력하시, var 사용
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] intArray = { "사과", "배", "포도", "딸기", "바나나" };

            Console.WriteLine("foreach와 var를 통해 출력하기.");

            //반복을 통해 요소값 출력
            foreach(var str in intArray)    // 배열이나 컬랙션 출력할 땐 foreach가 편함. 횟수 재한 넣을때는 for문이 편함.
            {
                Console.WriteLine(str);
            }
        }
    }
}
*/



// 별 직각삼각형 만들기
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            for(int i = 1; i < 10; i++) {
                for (int j = 0; j < i; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
        }
    }
}
*/




// 모래시계
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            for (int i = 1; i < 15; i+=2)
            {
                for (int j = 1; j < i; j+=2)
                {
                    Console.Write(" ");
                }
                for (int p = 1; p < 15 - i; p++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }

            for (int i = 1; i < 15; i += 2)
            {
                for (int j = 1; j < 14-i; j+=2 )
                {
                    Console.Write(" ");
                }
                for (int p = 0; p < i; p++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }

        }
    }
}
*/


// 사용자 입력크기의 모래시계
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("모래시계의 크기를 입력하세요: ");
            int size = int.Parse(Console.ReadLine());

            // 상단 부분 그리기
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    Console.Write(" ");
                }
                for (int k = i; k < size; k++)
                {
                    Console.Write("* ");
                }
                Console.WriteLine();
            }

            // 하단 부분 그리기
            for (int i = size - 2; i >= 0; i--)
            {
                for (int j = 0; j < i; j++)
                {
                    Console.Write(" ");
                }
                for (int k = i; k < size; k++)
                {
                    Console.Write("* ");
                }
                Console.WriteLine();
            }

        }
    }
}
*/



// 문제 : 나비모양
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("나비의 크기를 입력하세요: ");
            int size = int.Parse(Console.ReadLine());

            int h_size = (size * 2) - 1;
            

            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j <= i; j++)
                {
                    Console.Write("*");
                }
                for (int k = i; k < size - 1; k++)
                {
                    Console.Write(" ");
                }
                for (int k = i; k < size - 1; k++)
                {
                    Console.Write(" ");
                }
                for (int j = 0; j <= i; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
            for (int i = 1; i < size; i++)
            {
                for (int j = 0; j < size - i; j++)
                {
                    Console.Write("*");
                }
                for (int k = 0; k < i; k++)
                {
                    Console.Write(" ");
                }
                for (int k = 0; k < i; k++)
                {
                    Console.Write(" ");
                }
                for (int j = 0; j < size - i; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }

        }
    }
}
*/



// 배열

// length 속성 사용해보기
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] intArray = new int[] { 52, 273, 32, 65, 103 };

            Console.WriteLine(intArray.Length);
        }
    }
}
*/


// length 와 foreach 반목문 비교





// 원하는 크기의 배열 생성
/*
using System;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] intArray = new int[100];  // 0으로 내가 초기화 하지 않아도 0 으로 자동 초기화가 된다.

            Console.WriteLine(intArray[10]);
            Console.WriteLine(intArray[87]);
        }
    }
}
*/



// 중첩의 반복문을 사용하여 2차원 배열의 형식 연습1
/*
using System;
using System.Text.Json.Nodes;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[ , ] nArray1 = new int[2,2];  // 0으로 내가 초기화 하지 않아도 0 으로 자동 초기화가 된다.

            nArray1[0, 0] = 1;
            nArray1[0, 1] = 2;
            nArray1[1, 0] = 3;
            nArray1[1, 1] = 4;

            for (int i = 0; i < 2; i++)
            {
                for(int j = 0; j < 2; j++)
                {
                    Console.Write(nArray1[i, j] + " ");
                }
                Console.WriteLine();
            }
            Console.WriteLine();

        }
    }
}
*/



// 중첩의 반복문을 사용하여 2차원 배열의 형식 연습2
/*
using System;
using System.Text.Json.Nodes;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[,] nArray1 = { { 1, 2 }, { 3, 4 } };

            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    Console.Write(nArray1[i, j] + " ");
                }
                Console.WriteLine();
            }
            Console.WriteLine();
        }
    }
}
*/



// 중첩의 반복문을 사용하여 2차원 배열의 형식 연습3
/*
using System;
using System.Text.Json.Nodes;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[,,] nArray1 = { { { "ab","cd" }, { "ef","gh" } },
                                   { { "ij","kl" }, { "mn","op" } } }; 

            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    for (int k = 0; k < 2; k++)
                    {

                        Console.Write(nArray1[i, j, k] + " ");
                    }
                    Console.WriteLine();
                }
                Console.WriteLine();
            }            
        }
    }
}
*/




// 가변배열 연습
/*
using System;
using System.Text.Json.Nodes;

namespace Daily240111_15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[][] array = new int[2][];
            array[0] =  new int[3] { 1, 2, 3 };
            array[1] = new int[2] { 4, 5 };

            for (int i = 0; i < array.Length; i++)
            {
                for (int j = 0; j < array[i].Length; j++)
                {
                    Console.Write(array[i][j]);
                }
                Console.WriteLine();
            }
            
        }
    }
}
*/










