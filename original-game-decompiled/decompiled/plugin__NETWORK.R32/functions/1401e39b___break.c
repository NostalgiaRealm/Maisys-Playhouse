
/* ==== __break @ 1401e39b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e39b-1401e39b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


