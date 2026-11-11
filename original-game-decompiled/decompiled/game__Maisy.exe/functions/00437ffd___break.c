
/* ==== __break @ 00437ffd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00437ffd-00437ffd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


