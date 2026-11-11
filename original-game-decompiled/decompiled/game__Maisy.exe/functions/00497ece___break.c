
/* ==== __break @ 00497ece ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00497ece-00497ece
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


