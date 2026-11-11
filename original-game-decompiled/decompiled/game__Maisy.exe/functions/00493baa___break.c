
/* ==== __break @ 00493baa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493baa-00493baa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


