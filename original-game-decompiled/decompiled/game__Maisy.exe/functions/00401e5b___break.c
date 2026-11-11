
/* ==== __break @ 00401e5b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401e5b-00401e5b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


