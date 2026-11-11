
/* ==== __break @ 00401e58 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401e58-00401e58
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


