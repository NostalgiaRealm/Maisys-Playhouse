
/* ==== __break @ 0044e4ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e4ff-0044e4ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


