# HTTP 

1.동작:  클라이언트 즉, 사용자가 브라우저를 통해서 어떠한 서비스를 url을 통하거나 다른 것들을 통해서 요청(request)을 하면 서버에서는 해당 요청사항에 맞는 결과를 찾아서 사용자에게 응답하는 형태로 작동함 .



#### METHOD

- GET :   지정한 리소스 요청

- PUT:   리소스 업데이트

- DELETE:   지정한 리소스를 서버에서 삭제 

- POST:   지정된 서버의 업무를 실행

- PATCH:  지정된 리소스 업데이트 

  

#### STATUS CODE

- 상태 코드에는 굉장히 많은 종류가 있고 모두 숫자 세 자리로 이루어져 있다.

- 1XX(조건부 응답): 요청을 받았으며 작업을 계속함

- 2XX(성공): 클라이언트가 요청한 동작을 수신하여 이해했고 승낙했으며 성공적으로 처리했음을

  가리킴.

- 4XX(리다이렉션 완료): 클라이언틑는 요청을 마치기 위해 추가 동작을 취해야 함.
- 5XX(서버 오류): 서버가 유효한 요청을 명백하게 수행하지 못했음을 나타냄.



# HTTP의 특성

- HTTP 메시지는 HTTP 서버와 HTTP 클라이언트에 의해 해석됨.

- TCP/IP(응용층/전송층/네트워크층/링크층/물리층 5개의 층을 사용하는 구조)를 이용하는 

  응용 프로토콜

- HTTP는 연결 상태를 유지하지 않는 비연결성 프로토콜

- HTTP는 연결을 유지하지 않는 프로토콜이기 때문에 요청/응답 방식으로 동작함.



# Rest API 와 Restful API

- REST의 구성요소: 자원-URI , 행위-HTTP METHOD, 표현(Representations)
- Rest는 URI를 통해 자원을 표시하고, HTTP METHOD를 이용하여 해당 자원의 행위를 정해주며 그 결과를 받는 것을 말함.



####  Rest의 특징

- Uniform interface:  HTTP 표준만 따르면 어떤 언어 혹은 어떤 플랫폼에서 사용하여도 사용이 가능한 인터페이스 스타일
- Stateless: Rest는 상태 정보를 유지하지 않음. 서버는 각각의 요청을 완전히 다른 것으로 인식하고 처리를 함. 이전 요청이 다음 요청 처리에 연관이 되면 안됨.
- Cacheale: HTTP의 기존 웹 표준을 그대로 사용하여 HTTP가 가진 캐싱 기능 적용이 가능.
- Self-descriptiveness: Rest API 메시지만 보고도 쉽게 이해할 수 있는 자체 표현 구조로 되어있음
- Client-Server: Rest 서버는 API 제공을 하고 클라이언트는 사용자 인증에 관련된 일들을 직접 관리함. 자원이 있는 쪽이 Sever라고 하고 자원을 요청하는 쪽이 Client가 됨.
- Layerd System : 클라이언트는 Rest API 서버만 호출함. Rest 서버는 다중 계층으로 구성될 수 있으며 로드 밸런싱, 암호화, 사용자 인증 등을 추가하여 구조상의 유연성을 둘 수 있음.



####  Restful API

Rest 기반의 규칙들을 지켜서 설계된 API를 Rest API 혹은 

Restful API라고 함.



#### Restful API 설계규칙

- URI는 정보의 자원을 표현해야함.

   ex) GET/users/321

- 자원에 대한 행위는 HTTP METHOD로 표현함.

  ex) GET/users/321 321 ID를 가진 유저 정보를 가져오기

- 슬래시( / )는 계층 관계를 나타내는데 사용함.

  ex) http://restapi.test.com/users/rooms

  ​      http://restapi.test.com/users/board

  

- 하이픈(-)은 URL의 가독성을 높이는데 사용함.

- 언더바(_) 혹은 밑줄은 URI에 사용하지 않음.

- URI는 경로에는 소문자가 적합함.

- 파일 확장자는 URI에 포함하지 않음.

- 리소스 간의 관계를 표현하는 방법

  GET : /users/{userid}/devices



#### URL과 URI의 차이

- URL : 자원, 웹사이트 주소가 요청하는 파일이라기 보다, 구부자로 봄.

  ​          웹 상에 서비스를 제공하는 각 서버들에 있는 파일의 위치를 표시하      

​                 기 위한 것.

- URI :   통합 자원 식별자, 인터넷에 있는 자원을 나타내는 유일한 주소

  ​             URI의 존재는 인터넷에서 요구되는 기본조건으로서, 인터넷 프로토 

  ​             콜에 항상 붙어다님. URI의 하위 개념에 URL, URN이 포함됨.

  ​            URI의 보편적인 상태가 URL인데, URI의 부분집합으로 볼 수 있음.

  ​            

  ### 포트

네트워크를 통해 데이터를 주고받는 프로세스를 식별하기 위해 호스트 내부적으로 프로세스가 할당받는 고유한 값





## 쿠키와 세션



### 쿠키

클라이언트와 서버의 상태 정보를 담고 있는 작은 데이터 조각

1. 클라이언트가 요청한 웹페이지를 받으면서 쿠키를 클라이언트에 저장
2. 클라이언트가 서버에 재요청을 하는 경우, 웹페이지 요청과 함께 쿠키 값도 같이 전달
3. 지속적으로 로그인 정보를 가지고 있는 것처럼 사용함

### 세션

일정시간 동안 브라우저로 돌아오는 일련의 요구를 하나의 상태로 보고 그 상태를 유지하는 기술

1. 클라이언트가 서버에 접속 시, 세션 ID를 발급받음
2. 서버에서는 클라이언트로 발급해준 세션 ID를 쿠키를 사용하여 저장
3. 클라이언트는 HTTP Request 헤더에 세션 ID를 포함하여 원하는 리소스를 서버에 요청
4. 서버는 세션 ID를 확인하고 해당 세션을 서버 자원에서 찾아 적절한 응답을 수행

