
/* ==== __break @ 0044e2ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e2ff-0044e2ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


