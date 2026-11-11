
/* ==== __break @ 0042f9ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042f9ff-0042f9ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


