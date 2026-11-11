
/* ==== __break @ 0040f7fc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f7fc-0040f7fc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


