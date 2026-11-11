
/* ==== __break @ 0044e82b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e82b-0044e82b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


