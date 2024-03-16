template <typename T>
class EverythingButInt
{
public:
  EverythingButInt()
{
    static_assert(sizeof(T)!=sizeof(int), "int запрещен!!!");
  }
};

int main (int argc, char *argv[]) {
  EverythingButInt<int> test;
  return 0;
}
