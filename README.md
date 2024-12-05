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
