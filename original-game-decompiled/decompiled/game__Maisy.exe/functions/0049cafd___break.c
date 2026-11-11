
/* ==== __break @ 0049cafd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049cafd-0049cafd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


