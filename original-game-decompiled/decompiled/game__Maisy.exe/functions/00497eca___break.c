
/* ==== __break @ 00497eca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00497eca-00497eca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


