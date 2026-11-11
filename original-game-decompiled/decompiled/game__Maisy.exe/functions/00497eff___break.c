
/* ==== __break @ 00497eff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00497eff-00497eff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


