/* Copyright holders: Sarah Walker, SA1988
   see COPYING for more details
*/
void dma_init();
void dma16_init();
void ps2_dma_init();
void dma_reset();
int dma_mode(int channel);

#define DMA_NODATA -1
#define DMA_OVER 0x10000
#define DMA_VERIFY 0x20000

void readdma0();
int readdma1();
uint8_t readdma2();
int readdma3();

void writedma2(uint8_t temp);

int dma_channel_read(int channel);
int dma_channel_write(int channel, uint16_t val);

void dma_alias_set();
void dma_alias_remove();
void dma_alias_remove_piix();

void DMAPageRead(uint32_t PhysAddress, char *DataRead, uint32_t TotalSize);
void DMAPageWrite(uint32_t PhysAddress, const char *DataWrite, uint32_t TotalSize);