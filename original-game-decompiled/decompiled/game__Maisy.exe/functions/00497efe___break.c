
/* ==== __break @ 00497efe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00497efe-00497efe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


