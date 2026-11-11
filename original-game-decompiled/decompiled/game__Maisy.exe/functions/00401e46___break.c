
/* ==== __break @ 00401e46 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401e46-00401e46
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


