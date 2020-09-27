# NoSQL



##### NoSQL이란

NoSQL의 약자는 Not Only SQL, Non-Operational Database SQL로 엇갈리는 의견들이 있는데 현재 Not Only SQL로 풀어 설명하는 것이 다수를 차지함.

이 말의 의미는, **기존의 관계형 DBMS가 갖고있는 특성 뿐만 아니라 다른 특성들을 부가적으로 지원한다는 것**이다.



**NoSQL의 특징**

:**NoSQL 데이터 베이스는 기존의 관계형 데이터베이스보다 더 융통성있는 데이터 모델을 사용하고 데이터의 저장 및 검색을 위한 특화된 매커니즘을 제공**하는데 이를 통해 NoSQL 데이터베이스는 단순 검색 및 추가작업에 있어서 매우 최적화된 키 값 저장 기법을 사용하여 **응답속도나 처리효율 등에 있어서 매우 뛰어난 성능을 나타낸다.**

- 관계형 모델을 사용하지 안흥며 테이블 간 연결해서 조회할 수 있는 조인 기능이 없음
- 데이터 조회를 위해 직접 프로그래밍하는 등의 비 SQL 인터페이스를 통한 데이터 접근
- 대부분 여러 데이터베이스 서버를 묶어서(클리스터링) 하나의 데이터베이스 구성
- 관계형 데이터베이스에서 지원하는 데이터 처리 완결성(Transaction, ACID 지원)이 보장되지 않음
- 데이터의 스키마와 속성들을 다얗아게 수용하고 동적으로 정의
- 데이터베이스의 중단없는 서비스와 자동 복구 기능 지원
- 대다수 제품이 Open Souce로 제공
- 대다수의 제품이 고 확장성, 고 가용성, 고 성능 특징을 가짐

정리하면, NoSQL은 초고용량 데이터 처리 등 성능에 특화된 목적을 위해 비 관계형 데이터 저장소에 비 구조적인 데이터를 저장하기 위한 분산저장 시스템이라고 볼 수 있음. 빅데이터 처리에 특화됨.



**No SQL의 종류**

저장되는 데이터의 구조에 따라 나뉘는데 

- **Key-Value DB(널리 쓰임)**

   key 와 value의 쌍으로 데이터가 저장되는 유형으로써 Amazon의            Dynamo Paper에서 유래됨

- **Wide Columnar DB**

  Big Table DB라고도 하며, Google의 BigTable Paper에서 유래됨.             column Family 데이터 모델을 사용함.

- **Document DB**

   Lotus Notes에서 유래되었으며, JSON, XML과 같은 Colloection 데이터          구조를 채택함. Mongo DB, Cough DB가 이 종류에 해당됨.

- **Graph DB**

  Euler &Graph Theory에서 유래한 DB로 Nodes, Relationship, Key-Value           데이터 모델을 채용하고 있음.
