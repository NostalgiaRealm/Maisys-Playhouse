
/* ==== __break @ 00425bdc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00425bdc-00425bdc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


