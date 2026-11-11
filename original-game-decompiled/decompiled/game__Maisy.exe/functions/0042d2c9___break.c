
/* ==== __break @ 0042d2c9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042d2c9-0042d2c9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


