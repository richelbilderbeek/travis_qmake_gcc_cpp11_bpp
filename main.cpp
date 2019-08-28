#include <iostream>

#include <Bpp/Seq/Alphabet/AlphabetTools.h>
#include <Bpp/Seq/Sequence.h>

bpp::BasicSequence get_sequence() noexcept
{
  return bpp::BasicSequence(
    "test",
    "ATGC",
    &bpp::AlphabetTools::DNA_ALPHABET
  );
}

int main()
{
  const auto sequence = get_sequence();
  std::cout
    << "sequence name: " << sequence.getName() << '\n'
    << "sequence nucleotides: " << sequence.toString() << '\n'
    << "number of nucleotides: " << sequence.size() << '\n'
  ;
}
