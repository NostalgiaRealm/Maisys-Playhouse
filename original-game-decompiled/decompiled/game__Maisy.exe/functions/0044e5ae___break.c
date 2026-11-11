
/* ==== __break @ 0044e5ae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e5ae-0044e5ae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


