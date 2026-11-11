
/* ==== __break @ 1401122b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401122b-1401122b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


