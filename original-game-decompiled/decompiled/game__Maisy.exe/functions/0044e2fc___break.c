
/* ==== __break @ 0044e2fc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e2fc-0044e2fc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


