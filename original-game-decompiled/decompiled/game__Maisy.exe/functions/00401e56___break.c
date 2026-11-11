
/* ==== __break @ 00401e56 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401e56-00401e56
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


