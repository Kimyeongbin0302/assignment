# 숫자 맞추기 게임

C++로 작성된 간단한 숫자 맞추기 게임입니다. `ncurses` 라이브러리를 사용하여 터미널에서 상호작용이 가능한 환경을 제공합니다.

## 특징
- 1부터 100 사이의 랜덤 숫자를 맞추는 게임.
- 정답보다 큰지 작은지 힌트를 제공.
- 입력한 시도 횟수 추적.
- `q` 또는 `Q`를 입력하면 언제든 종료 가능.
- 직관적인 터미널 환경 제공.

## 설치 및 실행 방법
```bash
# 패키지 업데이트
sudo apt-get update

# ncurses 라이브러리 설치
sudo apt-get install libncurses5-dev libncursesw5-dev

# 코드 컴파일
g++ -o number_guessing_game number_guessing_game.cpp -lncurses

# 프로그램 실행
./number_guessing_game

## 필요 라이브러리
- **C++ 표준 라이브러리**: `cstdlib`, `ctime`, `iostream` 등.
- **ncurses 라이브러리**: 터미널 기반 입출력 처리를 위한 라이브러리.

## 사용법

1. 프로그램 실행 후, **1부터 100 사이의 숫자를 추측**하라는 메시지가 표시됩니다.
2. 숫자를 입력하고 **Enter** 키를 눌러 정답을 추측합니다.
3. 게임은 입력된 숫자에 따라 다음과 같은 힌트를 제공합니다:
   - 입력값보다 정답이 **크면**: *"The number is larger."*
   - 입력값보다 정답이 **작으면**: *"The number is smaller."*
4. 정답을 맞추면, **시도 횟수**와 함께 다음 메시지가 출력됩니다:
   - *"Correct! Number of attempts: <횟수>"*
5. 게임을 종료하려면 언제든 **q** 또는 **Q**를 입력하면 됩니다.
6. 정답을 맞추거나 종료하면 *"Press any key to exit."* 메시지가 표시되며, 아무 키나 눌러 프로그램을 종료할 수 있습니다.

## 예시 화면
Welcome to the Number Guessing Game!
Guess a number between 1 and 100: 50
The number is larger.
Guess a number between 1 and 100: 75
The number is smaller.
Guess a number between 1 and 100: 63
Correct! Number of attempts: 3
Press any key to exit.
