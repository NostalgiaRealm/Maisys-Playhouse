
/* ==== __break @ 004995ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004995ff-004995ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


