
/* ==== __break @ 0043163f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043163f-0043163f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


