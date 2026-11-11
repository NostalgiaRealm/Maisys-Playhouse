
/* ==== __break @ 00401e55 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401e55-00401e55
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


