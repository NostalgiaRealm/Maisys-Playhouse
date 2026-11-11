
/* ==== __break @ 004893ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004893ee-004893ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


